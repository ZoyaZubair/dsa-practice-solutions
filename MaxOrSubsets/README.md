# Problem: 2044. Count Number of Maximum Bitwise-OR Subsets

Given an integer array `nums`, find the **maximum possible bitwise OR** of a subset of `nums` and return the **number of different non-empty subsets** that achieve this value.

## Example 1:
Input: nums = [3,1]  
Output: 2  
Subsets with OR = 3: [3], [3,1]

## Example 2:
Input: nums = [2,2,2]  
Output: 7  
All 7 non-empty subsets have OR = 2

## Example 3:
Input: nums = [3,2,1,5]  
Output: 6  
Subsets with OR = 7:  
- [3,5], [3,1,5], [3,2,5], [3,2,1,5], [2,5], [2,1,5]

## Constraints:
- 1 <= nums.length <= 16
- 1 <= nums[i] <= 1e5
