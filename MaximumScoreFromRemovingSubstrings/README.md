# LeetCode 1717 - Maximum Score From Removing Substrings

## Problem
You are given a string `s` and two integers `x` and `y`. You can remove the substrings:
- "ab" for `x` points
- "ba" for `y` points

Your goal is to maximize the score by removing substrings in the best order.

## Example
**Input:**  
`s = "cdbcbbaaabab", x = 4, y = 5`  
**Output:** `19`

## Approach
- Greedily remove the higher-scoring pattern first.
- Use a stack to simulate the removal in a single pass.

## Files
- `solution.cpp`: Contains the full C++ implementation
- `Notes/intuition.txt`: Explanation of logic
