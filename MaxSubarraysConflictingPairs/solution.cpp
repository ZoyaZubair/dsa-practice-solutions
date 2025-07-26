#include <vector>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;

class Solution {
public:
    long long maxSubarrays(int n, vector<vector<int>>& conflictingPairs) {
        // Prepare: startAt[i] contains vector of {y, idx} listing all pairs (i, y)
        vector<vector<pair<int,int>>> startAt(n + 2);
        int m = conflictingPairs.size();
        for (int idx = 0; idx < m; ++idx) {
            int p1 = conflictingPairs[idx][0], p2 = conflictingPairs[idx][1];
            int x = min(p1, p2);
            int y = max(p1, p2);
            startAt[x].emplace_back(y, idx);
        }

        vector<int> firstBlockingPos(n + 2, n);
        vector<int> secondBlockingPos(n + 2, n);
        vector<int> idxBlocking(n + 2, -1);

        // Min-heap of (y, idx)
        using P = pair<int,int>;
        priority_queue<P, vector<P>, greater<P>> pq;
        for (int i = n; i >= 1; --i) {
            // insert all new conflicts starting at i
            for (auto& [y, idx]: startAt[i]) {
                pq.emplace(y, idx);
            }
            if (!pq.empty()) {
                auto [y1, idx1] = pq.top();
                pq.pop();
                int y2 = pq.empty() ? n+1 : pq.top().first;
                pq.push({y1, idx1});
                firstBlockingPos[i] = y1-1;
                secondBlockingPos[i] = (y2 <= n ? y2-1 : n);
                idxBlocking[i] = idx1;
            }
            // propagate more restrictive blocking intervals rightwards (right-to-left scan)
            if (firstBlockingPos[i] > firstBlockingPos[i+1]) {
                firstBlockingPos[i] = firstBlockingPos[i+1];
                secondBlockingPos[i] = min(secondBlockingPos[i], secondBlockingPos[i+1]);
                idxBlocking[i] = idxBlocking[i+1];
            }
        }

        long long validCnt = 0;
        map<int,long long> cand;
        for (int i = 1; i <= n; ++i) {
            validCnt += firstBlockingPos[i] - i + 1;
            if (idxBlocking[i] != -1 && secondBlockingPos[i] > firstBlockingPos[i]) {
                cand[idxBlocking[i]] += static_cast<long long>(secondBlockingPos[i] - firstBlockingPos[i]);
            }
        }
        long long best = validCnt;
        for (auto& [idx,val]: cand) {
            if (validCnt+val > best) best = validCnt+val;
        }
        return best;
    }
};
