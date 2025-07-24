# Leetcode 2322: Minimum Score After Removals on a Tree

## Problem Description

You are given a tree with `n` nodes and `n-1` edges. Each node has a value. You must remove two edges to split the tree into 3 connected components. For each component, calculate the XOR of node values. The **score** is defined as the difference between the maximum and minimum of the three XORs.

Return the **minimum possible score** over all pairs of edge removals.

### Example:

Input:
```
nums = [1,5,5,4,11]
edges = [[0,1],[1,2],[1,3],[3,4]]
```

Output: `9`

---

## Approach

1. **DFS Traversal**:
   - Compute `subtreeXor[node]`: XOR of all nodes in that subtree.
   - Track `inTime` and `outTime` to help check ancestor-descendant relationships.

2. **Try all pairs of removable edges**:
   - Represented as cutting nodes `(u, v)` (child sides of edges).
   - Handle cases:
     - `u` is ancestor of `v`
     - `v` is ancestor of `u`
     - They are disjoint
   - Use XOR math to compute 3 component XORs.

3. **Track minimum score**:
   - Score = `max(x1, x2, x3) - min(x1, x2, x3)`

---

## Time & Space Complexity

- **Time**: O(n²)
- **Space**: O(n)

---

## How to Run

Compile and run:

```sh
g++ -std=c++17 main.cpp -o solution
./solution
```
