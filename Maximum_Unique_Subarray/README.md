# Maximum Unique Subarray

**Problem**: Given an integer array `nums`, return the maximum sum of a subarray that contains only unique elements.

**Leetcode Link**: [Leetcode Problem #1695 - Maximum Erasure Value](https://leetcode.com/problems/maximum-erasure-value/)

### Approach

- Use a sliding window with two pointers.
- Maintain a set to ensure all elements in the window are unique.
- On encountering a duplicate, shrink the window from the left until the duplicate is removed.
- Track the sum of the current window and update the maximum sum found so far.

### Time and Space Complexity

- **Time Complexity**: O(n)
- **Space Complexity**: O(n)
