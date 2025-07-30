// Leetcode 2419: Longest Subarray With Maximum Bitwise AND

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int k = *max_element(nums.begin(), nums.end());
        int len = 0, maxLen = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == k) {
                len++;
            } else {
                len = 0;
            }
            maxLen = max(maxLen, len);
        }
        return maxLen;
    }
};
