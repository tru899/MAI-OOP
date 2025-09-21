#include <gtest/gtest.h>
#include "../include/find_max.h"

TEST(test_01, basic_test_set)
{
    EXPECT_EQ(find_max(3,10), 9);
    EXPECT_EQ(find_max(10,100), 100);
}

TEST(test_02, large_input_test)
{
    EXPECT_EQ(find_max(40000,200000), 200000);
    EXPECT_EQ(find_max(30000,200000), 180000);
}

TEST(test_03, not_found_test)
{
    EXPECT_EQ(find_max(10,3), 0);
}

TEST(test_04, invalid_input_test)
{
    EXPECT_EQ(find_max(10,-3), 1);
    EXPECT_EQ(find_max(-10,3), 1);
    EXPECT_EQ(find_max(10,0), 1);
    EXPECT_EQ(find_max(0,10), 1);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
