#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        int n = fruits.size();
        vector<int> pos, amt, prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pos.push_back(fruits[i][0]);
            amt.push_back(fruits[i][1]);
        }
        for (int i = 0; i < n; i++)
            prefix[i + 1] = prefix[i] + amt[i];

        auto getSum = [&](int l, int r) {
            int i = lower_bound(pos.begin(), pos.end(), l) - pos.begin();
            int j = upper_bound(pos.begin(), pos.end(), r) - pos.begin();
            return prefix[j] - prefix[i];
        };

        int ans = 0;
        for (int x = 0; x <= k; x++) {
            int left = startPos - x;
            int right = startPos + max(0, k - 2 * x);
            ans = max(ans, getSum(left, right));
        }
        for (int x = 0; x <= k; x++) {
            int right = startPos + x;
            int left = startPos - max(0, k - 2 * x);
            ans = max(ans, getSum(left, right));
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> fruits = {{2,8},{6,3},{8,6}};
    int startPos = 5, k = 4;
    cout << "Max fruits collected: " << sol.maxTotalFruits(fruits, startPos, k) << endl;
    return 0;
}
