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
        
        long long n = max(y, x);
        long long ans;
        
        if(n % 2 == 0) {
            // For even n, the maximum (n*n) is at (1, 1)
            if(y == 1) {
                // Top row: decreases from right to left
                ans = n * n - (x - 1);
            } else if(x == n) {
                // Right column: decreases from top to bottom
                ans = n * n - (n - 1) - (y - 1);
            } else if(x == 1) {
                // Left column: increases from top to bottom
                ans = (n - 1) * (n - 1) + y;
            } else {
                // Bottom row: increases from right to left
                ans = (n - 1) * (n - 1) + (n - 1) + (n - x);
            }
        } else {
            // For odd n, the maximum (n*n) is at (n, 1)
            if(y == n) {
                // Bottom row: decreases from left to right
                ans = n * n - (x - 1);
            } else if(x == 1) {
                // Left column: decreases from bottom to top
                ans = n * n - (n - 1) - (n - y);
            } else if(y == 1) {
                // Top row: increases from left to right
                ans = (n - 1) * (n - 1) + x;
            } else {
                // Right column: increases from top to bottom
                ans = (n - 1) * (n - 1) + (n - 1) + y;
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
