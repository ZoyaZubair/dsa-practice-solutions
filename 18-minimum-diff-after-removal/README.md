# Minimum Difference After Removal of Elements

**LeetCode Problem**: [Minimum Difference After Removal of Elements](https://leetcode.com/problems/minimum-difference-after-removal-of-elements)

### Problem Summary:
You're given an array of size 3n. Remove n elements such that remaining 2n elements can be split into two equal halves, and difference between their sums is minimized.

---

### Example:

```
Input: nums = [7,9,5,8,1,3]
Output: 1
```

---

### Approach:

- Use max heap from the left to track **smallest n** elements in prefix
- Use min heap from the right to track **largest n** elements in suffix
- Try all split points `i = n-1` to `2n-1`
- For each `i`, calculate `leftSum[i] - rightSum[i+1]` and track minimum

---

### Time & Space Complexity:
- **Time:** O(n log n)
- **Space:** O(n)

---

### Status: ✅ Accepted
