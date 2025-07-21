### Approach

- Use a counter to track how many times the current character has appeared consecutively.
- Traverse the string, and only add a character to the result if it does not make three in a row.
- Reset the counter when a new character is encountered.

### Time Complexity

- O(n), where n is the length of the string.

### Space Complexity

- O(n), for storing the final answer string.
