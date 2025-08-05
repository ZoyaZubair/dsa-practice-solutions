
# 3477. Fruits Into Baskets II

You are given two arrays of integers, `fruits` and `baskets`, each of length `n`, where `fruits[i]` represents the quantity of the ith type of fruit, and `baskets[j]` represents the capacity of the jth basket.

## Problem Statement

Place the fruits from left to right such that each fruit type is placed in the **leftmost available basket** with capacity greater than or equal to the quantity of that fruit. Each basket can hold only one type of fruit.

Return the number of **unplaced** fruit types.

### Example 1:

```
Input: fruits = [4,2,5], baskets = [3,5,4]
Output: 1
```

### Example 2:

```
Input: fruits = [3,6,1], baskets = [6,4,7]
Output: 0
```

## Constraints

- 1 <= n <= 100
- 1 <= fruits[i], baskets[i] <= 1000
