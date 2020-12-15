#include "A/index.h"
#include "B/lib.h"
#include "gtest/gtest.h"

TEST(test_A, test) {
    ASSERT_EQ(sum(1, 2), 3);
    ASSERT_EQ(sum(1000000, 1000000), 2000000);
}

TEST(test_B, test) {
    ASSERT_EQ(sub(100, 50), 50);
    ASSERT_EQ(sub(100, 100), 0);
    ASSERT_EQ(sub(200, 300), -100);
    ASSERT_EQ(sub(200, 200), 400);
}

