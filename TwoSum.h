//
// Created by ammar on 3/5/2023.
//

#ifndef CPP_LEETCODE_SOLUTIONS_TWOSUM_H
#define CPP_LEETCODE_SOLUTIONS_TWOSUM_H
#include <vector>
#include <array>

struct TwoSumTestCases {
    const std::vector<int> nums;
    const int target;
    const std::vector<int> expected;
};

class TwoSum {
public:
    static std::vector<int> twoSumBruteForce(const std::vector<int>& nums, int target);
};


#endif //CPP_LEETCODE_SOLUTIONS_TWOSUM_H
