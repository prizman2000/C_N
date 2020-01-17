#include "gtest/gtest.h"
#include "lib.h"

TEST(OperatorSum, expectedSum) {

    C_N a {4,3}, b {1,5};
    C_N sum = a + b;

    EXPECT_EQ(5, sum.x);
    EXPECT_EQ(8, sum.y);
}

TEST(OperatorSub, expectedSub) {

    C_N a {4,3}, b {1,5};
    C_N sub = a - b;

    EXPECT_EQ(3, sub.x);
    EXPECT_EQ(-2, sub.y);
}

TEST(OperatorDiv, expectedDiv) {

    C_N a {4,3}, b {1,5};
    C_N div = a / b;

    EXPECT_EQ(0.558824, div.x);
    EXPECT_EQ(-0.5, div.y);
}

TEST(OperatorMul, expectedMul) {

    C_N a {4,3}, b {1,5};
    C_N mul = a * b;

    EXPECT_EQ(-11, mul.x);
    EXPECT_EQ(23, mul.y);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
