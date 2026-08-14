/*
 * Problem Name: Increasing Array
 * Problem ID: 1094
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1094
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<long long> arr(n);  // Use long long for array elements (up to 10^9)
    
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];  // Simplified input
    }
    
    long long moves = 0;  // Use long long to avoid overflow
    for(int i = 1 ; i < n ; i++){
        if(arr[i-1] > arr[i]){
            moves += arr[i-1] - arr[i];  // Fixed: moves, not move
            arr[i] = arr[i-1];
        }
    }
    
    cout << moves << "\n";
    return 0;
}
