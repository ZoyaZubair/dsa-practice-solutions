# Leetcode 898 - Bitwise ORs of Subarrays

## Problem
Given an integer array `arr`, return the number of **distinct** bitwise ORs of all non-empty subarrays.

## Key Observations
- A subarray's bitwise OR only increases or stays the same.
- Keep track of all OR values of subarrays ending at the current index.

## Example
Input: arr = [1, 2, 4]  
Output: 6  
Explanation: Unique OR values: 1, 2, 3, 4, 6, 7

## Files
- `solution.cpp`: C++ implementation
- `Notes/explanation.txt`: Intuition, approach, and complexity analysis
