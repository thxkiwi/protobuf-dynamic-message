// client.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../protobuf-dynamic-message/dmp.pb.h"
#include <google/protobuf/descriptor.h>
#include <google/protobuf/dynamic_message.h>

#include <fstream>
#include <iostream>

struct APIObject
{
    APIObject()
        : descriptorPool(google::protobuf::DescriptorPool::generated_pool())
    {}

    google::protobuf::DescriptorPool descriptorPool;
    google::protobuf::DynamicMessageFactory dynamicMessageFactory;

    google::protobuf::Message* GetEngineSpecificParameters()
    {
        std::ifstream inputFile("serialized",
            std::ios_base::binary
            | std::ios_base::in);
        size_t nBytes(0);
        inputFile >> nBytes;

        std::cout << "Reading " << nBytes << std::endl;

        std::string serializedString(nBytes, '\0');
        inputFile.read((char*)serializedString.data(), nBytes);

        State state;
        state.ParseFromString(serializedString);

        std::cout << state.DebugString() << std::endl;

        google::protobuf::FileDescriptorProto const& fileDescriptorProto(state.engine_specific().msg_proto());
        google::protobuf::FileDescriptor const* fileDescriptor(descriptorPool.BuildFile(fileDescriptorProto));
        if (!fileDescriptor)
        {
            std::cerr << "failed building file from '" << fileDescriptorProto.name()
                << "' - " << fileDescriptorProto.DebugString() << std::endl;
            return nullptr;
        }

        google::protobuf::Descriptor const* messageDescriptor(fileDescriptor->FindMessageTypeByName(state.engine_specific().msg_name()));
        google::protobuf::Message const* messagePrototype(dynamicMessageFactory.GetPrototype(messageDescriptor));
        google::protobuf::Message* message(messagePrototype->New());
        message->ParseFromString(state.engine_specific().msg_content().value());

        return message;
    }
};

int main()
{
    APIObject api;
    google::protobuf::Message* engineSpecificParameters(api.GetEngineSpecificParameters());
    if (!engineSpecificParameters)
    {
        std::cerr << "No engine specific parameters" << std::endl;
        return 1;
    }

    google::protobuf::Reflection const* reflection(engineSpecificParameters->GetReflection());
    std::vector<google::protobuf::FieldDescriptor const*> fieldList;
    reflection->ListFields(*engineSpecificParameters, &fieldList);
    for (google::protobuf::FieldDescriptor const* fieldDescriptor : fieldList)
    {
        std::cout << fieldDescriptor->name() << " (" << fieldDescriptor->cpp_type_name() << ") : ";
        switch (fieldDescriptor->cpp_type())
        {
        case google::protobuf::FieldDescriptor::CPPTYPE_INT32:
            std::cout << reflection->GetInt32(*engineSpecificParameters, fieldDescriptor);
            break;
        case google::protobuf::FieldDescriptor::CPPTYPE_INT64:
            std::cout << reflection->GetInt64(*engineSpecificParameters, fieldDescriptor);
            break;
        case google::protobuf::FieldDescriptor::CPPTYPE_UINT32:
            std::cout << reflection->GetUInt32(*engineSpecificParameters, fieldDescriptor);
            break;
        case google::protobuf::FieldDescriptor::CPPTYPE_UINT64:
            std::cout << reflection->GetUInt64(*engineSpecificParameters, fieldDescriptor);
            break;
        case google::protobuf::FieldDescriptor::CPPTYPE_DOUBLE:
            std::cout << reflection->GetDouble(*engineSpecificParameters, fieldDescriptor);
            break;
        case google::protobuf::FieldDescriptor::CPPTYPE_FLOAT:
            std::cout << reflection->GetFloat(*engineSpecificParameters, fieldDescriptor);
            break;
        case google::protobuf::FieldDescriptor::CPPTYPE_BOOL:
            std::cout << reflection->GetBool(*engineSpecificParameters, fieldDescriptor);
            break;
        case google::protobuf::FieldDescriptor::CPPTYPE_ENUM:
            std::cout << "<enum>";
            break;
        case google::protobuf::FieldDescriptor::CPPTYPE_STRING:
            std::cout << reflection->GetString(*engineSpecificParameters, fieldDescriptor);
            break;
        }
        std::cout << std::endl;
    }

    delete engineSpecificParameters;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
