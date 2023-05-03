#include <iostream>
#include <vector>
#include <cassert>
#include "TwoSum.h"

int main() {
    const std::vector<TwoSumTestCases> testCases = {
            {{2, 7, 11, 15}, 9, {0, 1}},
            {{3, 2, 4}, 6, {1, 2}},
            {{3, 3}, 6, {0, 1}}
    };

    for (const auto& test: testCases) {
        assert(TwoSum::twoSumBruteForce(test.nums, test.target) == test.expected);
    }
    return 0;
}
