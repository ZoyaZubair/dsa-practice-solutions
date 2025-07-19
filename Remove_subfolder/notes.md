# 🧠 Notes: Remove Subfolders from Filesystem

### 💡 Key Insight

- By **sorting** the paths lexicographically, all subfolders of a folder will appear **right after** it.
- Only keep folders that are **not subfolders** of the last added folder.

### 🪜 Step-by-Step Example

Input: `["/a", "/a/b", "/c/d", "/c/d/e", "/c/f"]`  
Sorted: `["/a", "/a/b", "/c/d", "/c/d/e", "/c/f"]`

1. Add `/a` to result  
2. Skip `/a/b` (starts with `/a/`)
3. Add `/c/d` to result  
4. Skip `/c/d/e` (starts with `/c/d/`)
5. Add `/c/f` to result

Final Output: `["/a", "/c/d", "/c/f"]`

### ❗ Edge Cases

- All folders are subfolders → only root stays
- No subfolders → all stay
- Empty list → return empty
