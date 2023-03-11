
//
// Created by lufe0 on 19/09/2022.
//

//
// Created by lufe0 on 4/10/2021.
//

#include "gtest/gtest.h"

// Demonstrate some basic assertions.
TEST(OtroTest, BasicAssertions) {
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}

TEST(OtroTest, OtherFeatures) {

    EXPECT_GE(5,4);
}