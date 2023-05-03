//
// Created by ammar on 3/5/2023.
//
#include <stdexcept>
#include "TwoSum.h"

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
std::vector<int> TwoSum::twoSumBruteForce(const std::vector<int> &nums, int target) {
    if (nums.size() < 2) {
        throw std::invalid_argument("Array of nums must contain at least two integers.");
    }

    std::vector<int> result(2);

    for (int i = 0; i < nums.size(); i++) {
        for (int j = 1; j < nums.size(); j++) {
            if (j == i) {
                continue;
            }
            if (nums[i] + nums[j] == target) {
                return std::vector<int> {i, j};
            }
        }
    }
    throw std::invalid_argument("No combinations add up to target.");
}
