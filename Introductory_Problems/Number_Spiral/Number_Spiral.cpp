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
        
        // Find which layer/ring this point belongs to
        long long layer = max(y, x);
        long long max_val = layer * layer;
        long long min_val = (layer - 1) * (layer - 1) + 1;
        
        // If we're on the top row or left column (when layer is odd)
        if(layer % 2 == 1) {
            // Top row: values increase from left to right
            if(y == 1) {
                cout << min_val + x - 1 << "\n";
            }
            // Left column: values increase from top to bottom (going down)
            else if(x == 1) {
                cout << max_val - y + 1 << "\n";
            }
            // Right column: values decrease from bottom to top
            else if(x == layer) {
                cout << min_val + layer + (layer - y) << "\n";
            }
            // Bottom row: values decrease from right to left
            else if(y == layer) {
                cout << max_val - (layer - x) << "\n";
            }
        }
        // If we're on the top row or left column (when layer is even)
        else {
            // Top row: values increase from right to left
            if(y == 1) {
                cout << max_val - x + 1 << "\n";
            }
            // Left column: values decrease from bottom to top
            else if(x == 1) {
                cout << min_val + layer - (y - 1) << "\n";
            }
            // Right column: values increase from top to bottom
            else if(x == layer) {
                cout << min_val + y - 1 << "\n";
            }
            // Bottom row: values increase from left to right
            else if(y == layer) {
                cout << max_val - (layer - x) << "\n";
            }
        }
    }
    
    return 0;
}
