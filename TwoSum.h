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
    /// This function takes in a vector of integers,
    /// and finds the combination of two different integers in the vector
    /// that add up to the target integer.
    /// The index of the two integers are returned.
    /// The two integers are found by brute-force method
    /// where the addition of all possible pairs of integers
    /// from the vector is checked.
    /// \param nums Vector of integers.
    /// \param target Value of the two integers need to add up to.
    /// \return A vector of the index of the two integers that add up to target.
    /// \Complexity Time => O(n^2); Auxiliary => O(1); Space => O(n);
    /// \Complexity where n is the size of the vector (num of elements).
    static std::vector<int> twoSumBruteForce(const std::vector<int>& nums, int target);


    static std::vector<int> twoSumHashTable(const std::vector<int>& nums, int target);
};


#endif //CPP_LEETCODE_SOLUTIONS_TWOSUM_H
