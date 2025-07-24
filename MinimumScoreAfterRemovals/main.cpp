#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumScore(vector<int>& nums, vector<vector<int>>& edges) {
        int n = nums.size();
        vector<vector<int>> tree(n);
        for (auto& e : edges) {
            tree[e[0]].push_back(e[1]);
            tree[e[1]].push_back(e[0]);
        }

        vector<int> in(n), out(n), parent(n), xorSub(n);
        int time = 0;

        function<void(int, int)> dfs = [&](int node, int par) {
            parent[node] = par;
            in[node] = ++time;
            xorSub[node] = nums[node];
            for (int nei : tree[node]) {
                if (nei != par) {
                    dfs(nei, node);
                    xorSub[node] ^= xorSub[nei];
                }
            }
            out[node] = ++time;
        };

        dfs(0, -1);
        int totalXor = xorSub[0];
        int res = INT_MAX;

        auto isAncestor = [&](int u, int v) {
            return in[u] <= in[v] && out[u] >= out[v];
        };

        for (int u = 1; u < n; ++u) {
            for (int v = u + 1; v < n; ++v) {
                int a, b, c;
                if (isAncestor(u, v)) {
                    a = xorSub[v];
                    b = xorSub[u] ^ xorSub[v];
                    c = totalXor ^ xorSub[u];
                } else if (isAncestor(v, u)) {
                    a = xorSub[u];
                    b = xorSub[v] ^ xorSub[u];
                    c = totalXor ^ xorSub[v];
                } else {
                    a = xorSub[u];
                    b = xorSub[v];
                    c = totalXor ^ a ^ b;
                }
                int curMax = max({a, b, c});
                int curMin = min({a, b, c});
                res = min(res, curMax - curMin);
            }
        }

        return res;
    }
};

int main() {
    vector<int> nums = {1, 5, 5, 4, 11};
    vector<vector<int>> edges = {{0,1},{1,2},{1,3},{3,4}};
    Solution sol;
    cout << sol.minimumScore(nums, edges) << endl;
    return 0;
}
