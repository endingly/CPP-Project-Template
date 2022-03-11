#include "testPlayground.hpp"
#include <map>

std::vector<int> twoSum(std::vector<int> &nums, int target)
{
    // 定义一个哈希表，用来存储数组中的元素和下标的对应关系
    std::map<int, int> m;
    std::vector<int> result;
    // 循环遍历数组，将数组中的元素和下标存储到哈希表中
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]] = i;
    }
    // 再次循环找出符合条件的元素，并返回下标
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (m.find(complement) != m.end() && m[complement] != i)
        {
            result.insert(result.begin(), i);
            result.insert(result.begin(), m[complement]);
            break;
        }
    }
    return result;
}
