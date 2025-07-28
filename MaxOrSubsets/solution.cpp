#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxOr = 0, count = 0, n = nums.size();

        // Compute the max OR possible from all elements
        for (int i = 0; i < n; i++) {
            maxOr |= nums[i];
        }

        int total = 1 << n;
        // Loop through all subsets using bitmask
        for (int mask = 1; mask < total; mask++) {
            int curr = 0;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    curr |= nums[i];
                }
            }
            if (curr == maxOr) count++;
        }
        return count;
    }
};
