# Smallest Subarrays With Maximum Bitwise OR

This project solves Leetcode Problem [2411. Smallest Subarrays With Maximum Bitwise OR](https://leetcode.com/problems/smallest-subarrays-with-maximum-bitwise-or/).

## Problem

Given an array `nums`, for each index `i`, find the smallest subarray starting at `i` such that the bitwise OR of that subarray equals the maximum OR possible from `i` to the end.

## Example

**Input:**  
`nums = [1, 0, 2, 1, 3]`  
**Output:**  
`[3, 3, 2, 2, 1]`

## How It Works

The solution uses a greedy and bitmasking approach:
- Track the last seen position of each bit.
- For each index `i`, calculate how far you need to extend to include all bits needed for the max OR.

## Files

- `solution.cpp` — Contains the C++ implementation.
- `README.md` — Explanation and usage.
- `notes.txt` — Notes on the algorithm and optimizations.

## Complexity

- Time: O(n)
- Space: O(1)
