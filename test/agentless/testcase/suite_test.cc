//
// Created by 26023 on 2021/6/14.
//
#include "gtest/gtest.h"

using namespace std;
using namespace testing;

class SuiteTest : public Test {
protected:

    void SetUp() {
        cout << "SetUp..." << endl;
    };
    void TearDown() {
        cout << "TearDown..." << endl;
    };
};

TEST_F(SuiteTest, nothing) {

    return;
}

TEST_F(SuiteTest, assert) {

    ASSERT_EQ(1, 1);
    return;
}