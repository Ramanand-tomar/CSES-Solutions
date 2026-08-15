/*
 * Problem Name: Number Spiral
 * Problem ID: 1071
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1071
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--) {
        long long y, x;
        cin >> y >> x;
        
        long long m = max(y, x);
        long long ans;
        
        if(m % 2 == 0) {
            // Even m: spiral goes counter-clockwise from (m,1)
            if(y == 1) {
                ans = (m - 1) * (m - 1) + x;
            } else if(x == m) {
                ans = (m - 1) * (m - 1) + (m - 1) + y;
            } else if(y == m) {
                ans = m * m - (m - x);
            } else {
                ans = m * m - (m - 1) - (m - y);
            }
        } else {
            // Odd m: spiral goes clockwise from (1,m)
            if(x == 1) {
                ans = (m - 1) * (m - 1) + y;
            } else if(y == m) {
                ans = (m - 1) * (m - 1) + (m - 1) + (m - x);
            } else if(y == 1) {
                ans = m * m - (x - 1);
            } else {
                ans = m * m - (m - 1) - (m - y);
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
