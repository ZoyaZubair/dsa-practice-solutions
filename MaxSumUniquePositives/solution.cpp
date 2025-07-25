// Original Solution for Max Sum of Unique Positive Numbers

#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n = nums.size();
        set<int> st;
        if (n == 1) return nums[0];
        for (int it : nums) {
            st.insert(it);
        }
        int sum = 0;
        for (int it : st) {
            if (it > 0) sum += it;
        }
        if (sum == 0) return *st.rbegin();
        return sum;
    }
};
