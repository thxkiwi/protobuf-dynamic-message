// protobuf-dynamic-message.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "dmp.pb.h"
#include "Engine1Specific.pb.h"

#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/dynamic_message.h>

#include <iostream>
#include <fstream>
#include <ios>

int main()
{
    State state;
    state.set_basic_parameter("some basic value");

    Engine1Specific engine1Specific;
    engine1Specific.set_enabled(true);
    engine1Specific.set_field1(24.f);
    engine1Specific.set_field2(8000.f);
    engine1Specific.set_field3(12.f);

    auto specific(state.mutable_engine_specific());
    specific->set_msg_name("Engine1Specific");
    specific->mutable_msg_content()->PackFrom(engine1Specific);
    engine1Specific.GetDescriptor()->file()->CopyTo(specific->mutable_msg_proto());
    if (!specific->mutable_msg_proto()->has_name())
    {
        specific->mutable_msg_proto()->set_name("dmp.proto");
    }

    std::string serializedString;
    state.SerializeToString(&serializedString);

    std::ofstream outputFile("serialized",
        std::ios_base::out
        | std::ios_base::binary
        | std::ios_base::trunc);
    size_t const nBytes(serializedString.size());
    std::cout << "Writing " << nBytes << std::endl;
    outputFile << nBytes;
    outputFile.write(serializedString.data(), nBytes);

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
