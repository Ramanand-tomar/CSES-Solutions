# 18337035 - Weird Algorithm

**Category:** Introductory Problems  
**CSES Problem Link:** https://cses.fi/problemset/task/18337035  
**Time Limit:** 1.00 s  
**Memory Limit:** 512 MB  

---

Submission details
Task:	Weird Algorithm
Sender:	ramanand07
Submission time:	2026-08-13 09:47:29 +0300
Language:	C++ (C++17)
Status:	PENDING
Code
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    while (true) {
        cout << n << " ";
 
        if (n == 1)
            break;
 
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
    }
 
    cout << '\n';
 
    return 0;
}
SHARE CODE TO OTHERS