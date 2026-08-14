/*
 * Problem Name: Missing_Number
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-14
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    ll sum = 0;  // Changed from int to ll
    for(int i = 0 ; i < n-1 ; i++){
        int x;
        cin >> x;
        sum += x;
    }
    
    ll total = (ll)n * (n + 1) / 2;
    ll ans = total - sum;
    cout << ans << "\n";
    
    return 0;
}