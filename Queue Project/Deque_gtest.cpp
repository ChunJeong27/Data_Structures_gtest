#include <iostream>
#include <gtest/gtest.h>

#include "src/Deque.hpp"

TEST(test_case_name, test_name)
{
    EXPECT_EQ(2, true);
}

int main(int argc, char** argv)
{
    
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}