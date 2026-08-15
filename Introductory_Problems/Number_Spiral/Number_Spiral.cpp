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
        
        // Find the maximum coordinate
        long long n = max(y, x);
        
        long long ans;
        
        // The spiral fills layer by layer
        // In layer n, the maximum value is n*n
        // The minimum value is (n-1)*(n-1) + 1
        
        if(n % 2 == 1) {
            // Odd layers: the maximum is at bottom-right corner (n, n)
            if(y == n) {
                // Bottom row: values decrease as we go left
                ans = n * n - (n - x);
            } else if(x == 1) {
                // Left column: values continue decreasing upwards
                ans = n * n - (n - 1) - (n - y);
            } else if(y == 1) {
                // Top row: values increase from left to right
                ans = (n - 1) * (n - 1) + x;
            } else {
                // Right column: values increase from top to bottom
                ans = (n - 1) * (n - 1) + (n - 1) + y;
            }
        } else {
            // Even layers: the maximum is at top-left corner (1, 1)
            if(y == 1) {
                // Top row: values decrease as we go right
                ans = n * n - (x - 1);
            } else if(x == n) {
                // Right column: values continue decreasing downwards
                ans = n * n - (n - 1) - (y - 1);
            } else if(x == 1) {
                // Left column: values increase from top to bottom
                ans = (n - 1) * (n - 1) + y;
            } else {
                // Bottom row: values increase from right to left
                ans = (n - 1) * (n - 1) + (n - 1) + (n - x);
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
