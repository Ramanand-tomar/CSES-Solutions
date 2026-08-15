# Two Sets

**CSES Problem ID:** `1092`  
**Category:** Introductory Problems  
**CSES Task URL:** [https://cses.fi/problemset/task/1092](https://cses.fi/problemset/task/1092)  
**Time Limit:** 1.00 s  
**Memory Limit:** 512 MB  

---

Your task is to divide the numbers$1,2,…,n$into two sets of equal sum.

### Input

The only input line contains an integer$n$.

### Output

Print "YES", if the division is possible, and "NO" otherwise.

After this, if the division is possible, print an example of how to create the sets. First, print the number of elements in the first set followed by the elements themselves in a separate line, and then, print the second set in a similar way.

### Constraints

- $1 ≤ n ≤ 10⁶$

### Example 1

Input:

```
7
```

Output:

```
YES
4
1 2 4 7
3
3 5 6
```

### Example 2

Input:

```
6
```

Output:

```
NO
```