// Leetcode 898: Bitwise ORs of Subarrays

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> res;
        unordered_set<int> curr;
        for (int num : arr) {
            unordered_set<int> next;
            next.insert(num);
            for (int x : curr) {
                next.insert(num | x);
            }
            curr = next;
            for (int x : curr) {
                res.insert(x);
            }
        }
        return res.size();
    }
};
