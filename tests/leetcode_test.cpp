#include <iostream>
#include <gtest/gtest.h>
#include "testPlayground.hpp"

void say_hello()
{
    std::cout << "Hello, world!\n";
}

TEST(Leetcode, MoveZeroes)
{
    std::vector<int> nums = {1, 1, 0, 1, 0, 3, 12};
    int target = 13;
    auto result = twoSum(nums, target);
    for (auto i : result)
    {
        std::cout << i << "\t";
    }

    std::cout << "\n";
}
