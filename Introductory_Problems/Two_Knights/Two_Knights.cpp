/*
 * Problem Name: Two Knights
 * Problem ID: 1072
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1072
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    for (long long k = 1; k <= n; k++) {
 
        long long total = k * k * (k * k - 1) / 2;
 
        long long attacking = 4 * (k - 1) * (k - 2);
 
        long long answer = total - attacking;
 
        cout << answer << '\n';
    }
 
    return 0;
}
