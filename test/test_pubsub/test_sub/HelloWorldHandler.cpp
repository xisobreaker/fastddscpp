#include "HelloWorldHandler.h"
#include "DataPacketImpl.h"
#include "HelloWorldConstants.h"
#include "HelloWorldOnePubSubTypes.h"
#include "HelloWorldTwoPubSubTypes.h"
#include "ParticipantQosManager.h"
#include <glog/logging.h>

using namespace eprosima::fastdds::dds;
using namespace eprosima::fastdds::rtps;
using namespace eprosima::fastrtps::rtps;

HelloWorldHandler::HelloWorldHandler()
{
}

HelloWorldHandler::~HelloWorldHandler()
{
}

TopicDataTypeFactory *HelloWorldHandler::createProxyFactory()
{
    return new TopicDataTypeFactory(this);
}

eprosima::fastdds::dds::TopicDataType *HelloWorldHandler::createTopicDataType(std::string typeName)
{
    if (!typeName.compare(DDS_TYPE_HELLO_WORLD_ONE)) {
        return new HelloWorldOnePubSubType();
    } else if (!typeName.compare(DDS_TYPE_HELLO_WORLD_TWO)) {
        return new HelloWorldTwoPubSubType();
    } else {
        LOG(WARNING) << "Not found TopicDataType: " << typeName;
    }
    return nullptr;
}

DataPacketCreateCB HelloWorldHandler::getDataPacketCB(std::string typeName)
{
    if (!typeName.compare(DDS_TYPE_HELLO_WORLD_ONE)) {
        return createCBHelloWorldOne;
    } else if (!typeName.compare(DDS_TYPE_HELLO_WORLD_TWO)) {
        return createCBHelloWorldTwo;
    } else {
        LOG(WARNING) << "Not found DataPacketCB: " << typeName;
    }
    return nullptr;
}

DataProcessCB HelloWorldHandler::getDataProcessCB(std::string typeName)
{
    if (!typeName.compare(DDS_TYPE_HELLO_WORLD_ONE)) {
        return processCBHelloWorldOne;
    } else if (!typeName.compare(DDS_TYPE_HELLO_WORLD_TWO)) {
        return processCBHelloWorldTwo;
    } else {
        LOG(WARNING) << "Not found DataProcessCB: " << typeName;
    }
    return nullptr;
}

std::string HelloWorldHandler::getTypeNameByTopic(std::string topicName)
{
    if (!topicName.compare(DDS_TOPIC_HELLO_WORLD_ONE)) {
        return DDS_TYPE_HELLO_WORLD_ONE;
    } else if (!topicName.compare(DDS_TOPIC_HELLO_WORLD_TWO)) {
        return DDS_TYPE_HELLO_WORLD_TWO;
    } else {
        LOG(WARNING) << "Not found typename by topic: " << topicName;
    }
    return "";
}

DataPacket *HelloWorldHandler::createCBHelloWorldOne()
{
    return new DataPacketImpl<HelloWorldOne>();
}

DataPacket *HelloWorldHandler::createCBHelloWorldTwo()
{
    return new DataPacketImpl<HelloWorldTwo>();
}

void HelloWorldHandler::processCBHelloWorldOne(DataPacket *data)
{
    HelloWorldOne *hello = (HelloWorldOne *)data->getData();
    LOG(INFO) << "HelloWorldOne: " << hello->id();

    delete data;
}

void HelloWorldHandler::processCBHelloWorldTwo(DataPacket *data)
{
    HelloWorldTwo *hello = (HelloWorldTwo *)data->getData();
    LOG(INFO) << "HelloWorldTwo: " << hello->id();

    delete data;
}

bool HelloWorldHandler::init(uint32_t domain_id)
{
    ParticipantQosManager    manager("Participant_pubscriber");
    std::vector<std::string> peer_locators = {"127.0.0.1:5100"};
    // manager.addTCPV4Transport(5101, peer_locators);
    manager.addUDPV4Transport();
    DomainParticipantQos participantQos = manager.getDomainParticipantQos();

    m_manager.initDomainParticipant(domain_id, participantQos);
    m_manager.registerProxyWorker(this);
    return true;
}

bool HelloWorldHandler::registerPublisher(std::string topicName)
{
    std::string typeName = getTypeNameByTopic(topicName);
    if (typeName.size() > 0) {
        return m_manager.registerPublisher(topicName, typeName);
    }
    return false;
}

bool HelloWorldHandler::registerSubscriber(std::string topicName)
{
    std::string typeName = getTypeNameByTopic(topicName);
    if (typeName.size() > 0) {
        return m_manager.registerSubscriber(topicName, typeName);
    }
    return false;
}

bool HelloWorldHandler::publish(std::string topicName, void *data)
{
    std::string typeName = getTypeNameByTopic(topicName);
    if (typeName.size() > 0) {
        return m_manager.sendData(topicName, typeName, data);
    }
    return false;
}