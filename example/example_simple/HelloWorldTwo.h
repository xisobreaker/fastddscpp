// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file HelloWorldTwo.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_HELLOWORLDTWO_H_
#define _FAST_DDS_GENERATED_HELLOWORLDTWO_H_


#include <fastrtps/utils/fixed_size_string.hpp>

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(HelloWorldTwo_SOURCE)
#define HelloWorldTwo_DllAPI __declspec( dllexport )
#else
#define HelloWorldTwo_DllAPI __declspec( dllimport )
#endif // HelloWorldTwo_SOURCE
#else
#define HelloWorldTwo_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define HelloWorldTwo_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


/*!
 * @brief This class represents the structure DataBase defined by the user in the IDL file.
 * @ingroup HELLOWORLDTWO
 */
class DataBase
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport DataBase();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~DataBase();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object DataBase that will be copied.
     */
    eProsima_user_DllExport DataBase(
            const DataBase& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object DataBase that will be copied.
     */
    eProsima_user_DllExport DataBase(
            DataBase&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object DataBase that will be copied.
     */
    eProsima_user_DllExport DataBase& operator =(
            const DataBase& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object DataBase that will be copied.
     */
    eProsima_user_DllExport DataBase& operator =(
            DataBase&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x DataBase object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const DataBase& x) const;

    /*!
     * @brief Comparison operator.
     * @param x DataBase object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const DataBase& x) const;

    /*!
     * @brief This function sets a value in member baseId
     * @param _baseId New value for member baseId
     */
    eProsima_user_DllExport void baseId(
            int32_t _baseId);

    /*!
     * @brief This function returns the value of member baseId
     * @return Value of member baseId
     */
    eProsima_user_DllExport int32_t baseId() const;

    /*!
     * @brief This function returns a reference to member baseId
     * @return Reference to member baseId
     */
    eProsima_user_DllExport int32_t& baseId();


    /*!
    * @brief This function returns the maximum serialized size of an object
    * depending on the buffer alignment.
    * @param current_alignment Buffer alignment.
    * @return Maximum serialized size.
    */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const DataBase& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

private:

    int32_t m_baseId;

};
/*!
 * @brief This class represents the structure ChildData defined by the user in the IDL file.
 * @ingroup HELLOWORLDTWO
 */
class ChildData : public DataBase 
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ChildData();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ChildData();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object ChildData that will be copied.
     */
    eProsima_user_DllExport ChildData(
            const ChildData& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object ChildData that will be copied.
     */
    eProsima_user_DllExport ChildData(
            ChildData&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object ChildData that will be copied.
     */
    eProsima_user_DllExport ChildData& operator =(
            const ChildData& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object ChildData that will be copied.
     */
    eProsima_user_DllExport ChildData& operator =(
            ChildData&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x ChildData object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const ChildData& x) const;

    /*!
     * @brief Comparison operator.
     * @param x ChildData object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const ChildData& x) const;

    /*!
     * @brief This function sets a value in member childId
     * @param _childId New value for member childId
     */
    eProsima_user_DllExport void childId(
            int32_t _childId);

    /*!
     * @brief This function returns the value of member childId
     * @return Value of member childId
     */
    eProsima_user_DllExport int32_t childId() const;

    /*!
     * @brief This function returns a reference to member childId
     * @return Reference to member childId
     */
    eProsima_user_DllExport int32_t& childId();


    /*!
    * @brief This function returns the maximum serialized size of an object
    * depending on the buffer alignment.
    * @param current_alignment Buffer alignment.
    * @return Maximum serialized size.
    */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const ChildData& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

private:

    int32_t m_childId;

};
/*!
 * @brief This class represents the structure HelloWorldTwo defined by the user in the IDL file.
 * @ingroup HELLOWORLDTWO
 */
class HelloWorldTwo : public DataBase 
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport HelloWorldTwo();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~HelloWorldTwo();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object HelloWorldTwo that will be copied.
     */
    eProsima_user_DllExport HelloWorldTwo(
            const HelloWorldTwo& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object HelloWorldTwo that will be copied.
     */
    eProsima_user_DllExport HelloWorldTwo(
            HelloWorldTwo&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object HelloWorldTwo that will be copied.
     */
    eProsima_user_DllExport HelloWorldTwo& operator =(
            const HelloWorldTwo& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object HelloWorldTwo that will be copied.
     */
    eProsima_user_DllExport HelloWorldTwo& operator =(
            HelloWorldTwo&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x HelloWorldTwo object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const HelloWorldTwo& x) const;

    /*!
     * @brief Comparison operator.
     * @param x HelloWorldTwo object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const HelloWorldTwo& x) const;

    /*!
     * @brief This function sets a value in member index
     * @param _index New value for member index
     */
    eProsima_user_DllExport void index(
            uint32_t _index);

    /*!
     * @brief This function returns the value of member index
     * @return Value of member index
     */
    eProsima_user_DllExport uint32_t index() const;

    /*!
     * @brief This function returns a reference to member index
     * @return Reference to member index
     */
    eProsima_user_DllExport uint32_t& index();

    /*!
     * @brief This function copies the value in member message
     * @param _message New value to be copied in member message
     */
    eProsima_user_DllExport void message(
            const std::string& _message);

    /*!
     * @brief This function moves the value in member message
     * @param _message New value to be moved in member message
     */
    eProsima_user_DllExport void message(
            std::string&& _message);

    /*!
     * @brief This function returns a constant reference to member message
     * @return Constant reference to member message
     */
    eProsima_user_DllExport const std::string& message() const;

    /*!
     * @brief This function returns a reference to member message
     * @return Reference to member message
     */
    eProsima_user_DllExport std::string& message();
    /*!
     * @brief This function copies the value in member children
     * @param _children New value to be copied in member children
     */
    eProsima_user_DllExport void children(
            const std::vector<ChildData>& _children);

    /*!
     * @brief This function moves the value in member children
     * @param _children New value to be moved in member children
     */
    eProsima_user_DllExport void children(
            std::vector<ChildData>&& _children);

    /*!
     * @brief This function returns a constant reference to member children
     * @return Constant reference to member children
     */
    eProsima_user_DllExport const std::vector<ChildData>& children() const;

    /*!
     * @brief This function returns a reference to member children
     * @return Reference to member children
     */
    eProsima_user_DllExport std::vector<ChildData>& children();

    /*!
    * @brief This function returns the maximum serialized size of an object
    * depending on the buffer alignment.
    * @param current_alignment Buffer alignment.
    * @return Maximum serialized size.
    */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const HelloWorldTwo& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

private:

    uint32_t m_index;
    std::string m_message;
    std::vector<ChildData> m_children;

};

#endif // _FAST_DDS_GENERATED_HELLOWORLDTWO_H_