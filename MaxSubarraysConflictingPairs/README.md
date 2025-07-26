# Maximize Subarrays After Removing One Conflicting Pair (Leetcode 3480)

## Problem Statement
You are given an integer `n` which represents an array `nums = [1, 2, ..., n]`. You are also given a 2D array `conflictingPairs`, where each pair `[a, b]` indicates that elements `a` and `b` cannot appear together in the same subarray.

You must **remove exactly one** conflicting pair and return the **maximum number of non-empty subarrays** such that no subarray contains both elements from any remaining conflicting pair.

## Example

**Input**
```
n = 4
conflictingPairs = [[2,3],[1,4]]
```

**Output**
```
9
```

**Explanation**
Removing the conflict [2, 3] allows us to have 9 valid subarrays that don't contain both 1 and 4 together.

---

## Solution Overview

We use a **sweep-line + propagation** approach with a **min-heap** to track the closest conflicting intervals. This allows us to maintain the rightmost boundary of each valid subarray efficiently.

Key steps:
- Convert all conflicting pairs to start-from indices.
- Use a min-heap to track current blocking pairs.
- For each index from right to left, compute the earliest ending for a valid subarray.
- Calculate how much benefit we'd get if we removed a specific conflict.

This solution is optimized to run in **O(n + m log m)** time and passes all edge cases on Leetcode.

---

## Files
- `solution.cpp`: Full C++ implementation.
- `README.md`: This documentation.
- `notes.txt`: Technical breakdown and explanation of the approach.

