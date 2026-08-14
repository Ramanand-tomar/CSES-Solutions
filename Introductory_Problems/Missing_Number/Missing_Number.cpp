/*
 * Problem Name: Missing Number
 * Problem ID: 1083
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1083
*/

#include <bits/stdc++.h>using namespace std;using ll = long long;int main() {    ios::sync_with_stdio(false);    cin.tie(nullptr);    int n;    cin>>n;    int sum = 0;    for(int i = 0 ; i < n-1 ; i++){        int x;        cin>>x;        sum += x;    }    int total = (n*(n+1)/2);    int ans = total - sum;    cout<<ans<<"\n";        return 0;}