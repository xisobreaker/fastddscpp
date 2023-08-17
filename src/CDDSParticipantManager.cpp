#include "CDDSParticipantManager.h"
#include "CDDSTopicDataReader.h"
#include <fastdds/dds/topic/TypeSupport.hpp>

using namespace eprosima::fastdds::dds;
using namespace std;

CDDSParticipantManager::CDDSParticipantManager()
{
    m_proxyFactory = nullptr;
}

CDDSParticipantManager::~CDDSParticipantManager()
{
    if (m_proxyFactory) {
        delete m_proxyFactory;
        m_proxyFactory = nullptr;
    }
}

void CDDSParticipantManager::initDomainParticipant(int domainId, const eprosima::fastdds::dds::DomainParticipantQos &participantQos)
{
    m_domainParticipant = new CDDSDomainParticipant(domainId, participantQos);
}

void CDDSParticipantManager::registerProxyFactory(ITopicDataTypeCreator *creator)
{
    m_proxyFactory = new CTopicDataTypeFactory(creator);
}

bool CDDSParticipantManager::registerDataWriter(std::string topicName, std::string typeName)
{
    TypeSupport          typeSupport(m_proxyFactory->createTopicDataType(typeName));
    CDDSTopicDataWriter *topicWriter = new CDDSTopicDataWriter();
    topicWriter->initDataWriter(topicName, typeName, m_domainParticipant, typeSupport);
    if (m_mapWriter.find(topicName) == m_mapWriter.end()) {
        m_mapWriter[topicName] = map<string, CDDSTopicDataWriter *>();
    }
    m_mapWriter[topicName].insert(pair<string, CDDSTopicDataWriter *>(typeName, topicWriter));
    return true;
}

bool CDDSParticipantManager::registerDataReader(std::string topicName, std::string typeName)
{
    TypeSupport          typeSupport(m_proxyFactory->createTopicDataType(typeName));
    DataPacketCreateCB   createCallback = m_proxyFactory->getDataPacketCB(typeName);
    DataPacketProcessCB  processCallback = m_proxyFactory->getDataProcessCB(typeName);
    CDDSTopicDataReader *topicReader = new CDDSTopicDataReader();
    topicReader->initDataReader(topicName, typeName, m_domainParticipant, typeSupport, createCallback, processCallback);
    if (m_mapReader.find(topicName) == m_mapReader.end()) {
        m_mapReader[topicName] = map<string, CDDSTopicDataReader *>();
    }
    m_mapReader[topicName].insert(pair<string, CDDSTopicDataReader *>(typeName, topicReader));
    return true;
}

bool CDDSParticipantManager::sendData(std::string topicName, std::string typeName, void *data)
{
    if (m_mapWriter.find(topicName) != m_mapWriter.end()) {
        map<string, CDDSTopicDataWriter *> &mapWriter = m_mapWriter[topicName];
        if (mapWriter.find(typeName) != mapWriter.end()) {
            return mapWriter[typeName]->sendData(data);
        }
    }
    return false;
}