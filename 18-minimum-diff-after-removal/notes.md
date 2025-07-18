## Key Learnings:

- Prefix/suffix + heap-based optimization = powerful
- Important range: `i ∈ [n-1, 2n-1]`
- Why? To ensure both halves of final array have n elements
- Used maxHeap for tracking smallest sums
- Used minHeap for tracking largest sums

### Quiz memory:
- Heap direction matters (max vs min)
- Difference = sumFirst - sumSecond = leftSum[i] - rightSum[i+1]

---

## Tags: `Heap`, `Prefix Sum`, `Greedy`, `Subsequence`, `Sliding Window`
