#  - Weird Algorithm

**Category:** Introductory Problems  
**CSES Problem Link:** https://cses.fi/problemset/task/  
**Time Limit:** 1.00 s  
**Memory Limit:** 512 MB  

---

The following code implements the algorithm. Note that the numbers in the sequence may be much larger than the initial 
𝑛
n value. For 
𝑛
≤
1
0
6
n≤10
6
, it is enough to use a 64-bit integer type.

#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    while (true) {
        cout << n << " ";
        if (n == 1) break;
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    cout << "\n";
}
References
Collatz conjecture (Wikipedia)