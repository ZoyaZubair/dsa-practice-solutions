## Notes

- Subtree equality is detected via postorder serialization.
- Trie nodes are labeled as deleted if their subtree serial appears more than once.
- Only non-deleted paths are returned in the final answer.
- Used a hashmap to count subtree serialization frequencies.
