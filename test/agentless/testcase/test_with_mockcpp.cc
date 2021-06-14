//
// Created by 26023 on 2021/6/14.
//

#include "gtest/gtest.h"
#include "mockcpp/mockcpp.hpp"

#include "src/bma/include/restful.h"

extern "C" {
    extern int add(int a, int b);
}

using namespace std;
using namespace testing;

class MockCppTest : public Test {
    void SetUp() {

    };
    void TearDown() {
        GlobalMockObject::verify();
    };
};

TEST_F(MockCppTest, nothing) {

}
