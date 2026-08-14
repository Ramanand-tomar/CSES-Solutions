/*
 * Problem Name: Permutations
 * Problem ID: 1070
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1070
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    if (n == 1) {
        cout << "1\n";
    }
    else if (n <= 3) {
        cout << "NO SOLUTION\n";
    }
    else if (n == 4) {
        cout << "3 1 4 2\n";
    }
    else {
        // Print all even numbers in decreasing order
        for (int i = n - (n % 2); i >= 2; i -= 2) {
            cout << i << " ";
        }
        // Print all odd numbers in decreasing order
        for (int i = n - 1 + (n % 2); i >= 1; i -= 2) {
            cout << i << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
