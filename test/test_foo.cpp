// Copyright 2019, CLD.
#include <iostream>
#include "gtest/gtest.h"
#include "foo.h"


// IndependentMethod is a test case - here, we have 2 tests for this 1 test case
TEST(TestSuiteNameOne, TestNameOne) {
    int a, b, result;

    a = 3;
    b = 4;
    result = add(a, b);
    EXPECT_EQ(result, 7);

    a = 3;
    b = 5;
    result = add(a, b);
    EXPECT_EQ(result, 8);
}

TEST(TestSuiteNameOne, TestNameTwo) {
    int a, b, result;

    a = -3;
    b = -4;
    result = add(a, b);
    EXPECT_EQ(result, -7);

    a = -3;
    b = 5;
    result = add(a, b);
    EXPECT_EQ(result, 2);
}

// }  // namespace - could surround Project1Test in a namespace
