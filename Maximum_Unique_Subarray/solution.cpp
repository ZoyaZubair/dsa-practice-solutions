#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = 0;
        unordered_set<int> st;
        int sum = 0;
        int left = 0;
        for (int i = 0; i < n; i++) {
            while (st.count(nums[i])) {
                st.erase(nums[left]);
                sum -= nums[left];
                left++;
            }
            st.insert(nums[i]);
            sum += nums[i];
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};
