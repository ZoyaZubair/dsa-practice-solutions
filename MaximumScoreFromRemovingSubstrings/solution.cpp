// LeetCode 1717: Maximum Score From Removing Substrings
// https://leetcode.com/problems/maximum-score-from-removing-substrings/

#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removePairs(string &str, char a, char b, int score) {
        stack<char> st;
        int points = 0;
        for (char c : str) {
            if (!st.empty() && st.top() == a && c == b) {
                st.pop();
                points += score;
            } else {
                st.push(c);
            }
        }

        string res;
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        str = res;
        return points;
    }

    int maximumGain(string s, int x, int y) {
        int total = 0;
        if (x > y) {
            total += removePairs(s, 'a', 'b', x);
            total += removePairs(s, 'b', 'a', y);
        } else {
            total += removePairs(s, 'b', 'a', y);
            total += removePairs(s, 'a', 'b', x);
        }
        return total;
    }
};

// Example usage
int main() {
    Solution sol;
    string s = "cdbcbbaaabab";
    int x = 4, y = 5;
    cout << sol.maximumGain(s, x, y) << endl;  // Output: 19
    return 0;
}
