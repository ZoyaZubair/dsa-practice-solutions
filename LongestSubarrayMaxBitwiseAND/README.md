# Leetcode 2419 - Longest Subarray With Maximum Bitwise AND

## Problem
Find the longest contiguous subarray in which all elements equal the maximum possible bitwise AND of any subarray in the array.

## Approach
1. The maximum AND can only be obtained using the maximum number in the array.
2. So we find the maximum element `k`.
3. Then, we find the longest contiguous subarray where all elements equal `k`.

## Example
Input: [1, 2, 3, 3, 2, 2]  
Output: 2 (subarray [3, 3])

## Files
- `solution.cpp` - C++ implementation
- `Notes/explanation.txt` - Strategy explanation
