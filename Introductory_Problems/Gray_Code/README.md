# Gray Code

**CSES Problem ID:** `2205`  
**Category:** Introductory Problems  
**CSES Task URL:** [https://cses.fi/problemset/task/2205](https://cses.fi/problemset/task/2205)  
**Time Limit:** 1.00 s  
**Memory Limit:** 512 MB  

---

A Gray code is a list of all$2ⁿ$bit strings of length$n$, where any two successive strings differ in exactly one bit (i.e., their Hamming distance is one).

Your task is to create a Gray code for a given length$n$.

### Input

The only input line has an integer$n$.

### Output

Print$2ⁿ$lines that describe the Gray code. You can print any valid solution.

### Constraints

- $1 ≤ n ≤ 16$

### Example

Input:

```
2
```

Output:

```
00
01
11
10
```