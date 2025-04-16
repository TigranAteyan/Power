#include <gtest/gtest.h>
#include "func.h"

TEST(Power, PowerOfNumber_ZeroExponent) {
    EXPECT_EQ(Power(0, 0), 1);
}

TEST(Power, PowerOfNumber_OneExponent) {
    EXPECT_EQ(Power(5, 1), 5);
}

TEST(Power, PowerOfNumber_BasicCase) {
    EXPECT_EQ(Power(2, 10), 1024);
}

TEST(Power, PowerOfNumber_NegativeExponent) {
    EXPECT_NEAR(Power(2, -2), 0.25, 1e-9);
}

TEST(Power, PowerOfNumber_NegativeBaseOddExponent) {
    EXPECT_EQ(Power(-2, 3), -8);
}
