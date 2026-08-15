/*
 * Problem Name: Trailing Zeros
 * Problem ID: 1618
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1618
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // trailing zeros
    int n ;
    cin>>n;
    int ans = 0;
    while(n>=5){
        n = n/5;
        ans += n;
    }
    cout<<ans<<"\n";
 
    return 0;
}
