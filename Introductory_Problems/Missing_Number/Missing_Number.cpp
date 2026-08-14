/*
 * Problem Name: Missing Number
 * Problem ID: 1083
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1083
*/

#include <bits/stdc++.h>using namespace std;using ll = long long;int main() {    ios::sync_with_stdio(false);    cin.tie(nullptr);    int n;    cin>>n;    ll sum = 0;    for(int i = 0 ; i < n-1 ; i++){        ll x;        cin>>x;        sum += x;    }    ll total = (ll)(n*(n+1)/2);    ll ans = total - sum;    cout<<ans<<"\n";        return 0;}