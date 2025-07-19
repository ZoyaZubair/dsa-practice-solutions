# 🗂 Remove Subfolders from the Filesystem

### 🔍 Problem Statement

Given a list of folder paths, return only the **top-level folders** after removing all their **sub-folders**.

A folder is a sub-folder if it starts with another folder followed by a `/`.

### 🧠 Examples

**Input:**  
`["/a","/a/b","/c/d","/c/d/e","/c/f"]`  
**Output:**  
`["/a","/c/d","/c/f"]`

**Input:**  
`["/a","/a/b/c","/a/b/d"]`  
**Output:**  
`["/a"]`

### ✅ Constraints
- 1 ≤ folder.length ≤ 4×10⁴  
- 2 ≤ folder[i].length ≤ 100  
- folder[i] contains only lowercase letters and '/'
- folder[i] always starts with the character '/'
- Each folder name is unique.

---

### 🚀 Approach

1. **Sort** the folder paths lexicographically.
2. Iterate and keep only folders that are **not** subfolders of the last added folder.
3. Use `startsWith(prev + "/")` style check to determine subfolder status.

### ⏱ Time Complexity

- Sorting: `O(n log n)`
- Check each folder: `O(n * L)` (L is max length of path)

### 💡 Space Complexity

- `O(n)` for result list
