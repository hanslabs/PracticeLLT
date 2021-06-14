//
// Created by 26023 on 2021/6/14.
//

#include "gtest/gtest.h"

using namespace std;
using namespace testing;

class AgentlessEnvironment : public Environment {
protected:
    void SetUp() {
        cout << "SetUp AgentlessEnvironment" << endl;
    };
    void TearDown() {
        cout << "TearDown AgentlessEnvironment" << endl;
    };
};


int main(int argc, char* argv[])
{
    int ret;

    AddGlobalTestEnvironment(new AgentlessEnvironment);

    InitGoogleTest(&argc, argv);
    ret = RUN_ALL_TESTS();
    return ret;
}