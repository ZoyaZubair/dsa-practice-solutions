// Optimized solution using heaps
#include <vector>
#include <queue>
#include <climits>
using namespace std;

class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int n = nums.size() / 3;
        int sz = nums.size();

        priority_queue<int> maxHeap;
        vector<long long> leftSum(sz, 0);
        long long left = 0;

        for (int i = 0; i < sz; ++i) {
            maxHeap.push(nums[i]);
            left += nums[i];
            if (maxHeap.size() > n) {
                left -= maxHeap.top();
                maxHeap.pop();
            }
            if (maxHeap.size() == n) {
                leftSum[i] = left;
            }
        }

        priority_queue<int, vector<int>, greater<int>> minHeap;
        vector<long long> rightSum(sz, 0);
        long long right = 0;

        for (int i = sz - 1; i >= 0; --i) {
            minHeap.push(nums[i]);
            right += nums[i];
            if (minHeap.size() > n) {
                right -= minHeap.top();
                minHeap.pop();
            }
            if (minHeap.size() == n) {
                rightSum[i] = right;
            }
        }

        long long ans = LLONG_MAX;
        for (int i = n - 1; i < 2 * n; ++i) {
            ans = min(ans, leftSum[i] - rightSum[i + 1]);
        }

        return static_cast<int>(ans);
    }
};
