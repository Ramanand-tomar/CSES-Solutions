# Chessboard and Queens

**CSES Problem ID:** `1624`  
**Category:** Introductory Problems  
**CSES Task URL:** [https://cses.fi/problemset/task/1624](https://cses.fi/problemset/task/1624)  
**Time Limit:** 1.00 s  
**Memory Limit:** 512 MB  

---

Your task is to place eight queens on a chessboard so that no two queens are attacking each other. As an additional challenge, each square is either free or reserved, and you can only place queens on the free squares. However, the reserved squares do not prevent queens from attacking each other.

How many possible ways are there to place the queens?

### Input

The input has eight lines, and each of them has eight characters. Each square is either free (`.`) or reserved (`*`).

### Output

Print one integer: the number of ways you can place the queens.

### Example

Input:

```
........
........
..*.....
........
........
.....**.
...*....
........
```

Output:

```
65
```