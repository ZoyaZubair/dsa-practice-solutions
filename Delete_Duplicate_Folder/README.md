# Delete Duplicate Folder in System

LeetCode Daily Problem  
Difficulty: Hard  
Tags: Trie, Hashing, DFS, Serialization

---

### ❓ Problem
You are given a list of absolute folder paths. Two folders are identical if their subtree structures (including subfolder names) are identical.

Return all remaining folders after removing all sets of duplicate folders and their subfolders.

---

### 📌 Example
#### Input
```cpp
paths = [["a"],["c"],["a","b"],["c","b"],["a","b","x"],["a","b","x","y"],["w"],["w","y"]]
```
#### Output
```cpp
[["c"],["c","b"],["a"],["a","b"]]
```

---

### 💡 Intuition
- Use a Trie to represent the file system hierarchy.
- Serialize each subtree structure to generate unique identifiers.
- If two folders generate the same serialization, they're identical.
- Delete folders with duplicate serialization and their children.

---

### 🚀 Time & Space Complexity
- **Time**: O(N * L log L), where N = number of paths, L = average path length  
- **Space**: O(N * L) for the trie + serialization map

---

### ✅ Key Concepts
- Trie construction from paths
- DFS serialization to detect structural equality
- Hashing serialized subtrees
