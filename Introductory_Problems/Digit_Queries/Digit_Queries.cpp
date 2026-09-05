/*
 * Problem Name: Digit Queries
 * Problem ID: 2431
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/2431
 */

#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
ll solve(ll k){
    ll digit = 1;
    ll start = 1;
    while(true){
        ll count = 9*start;
        ll total = count*digits;
 
        if(k <= total){
            break;
        }
        k -= total;
        digit++;
        start *= 10;
    }
    ll num = start + (k-1)/digit;
    ll index = (k-1)%digit;
 
    string s = to_string(num);
    return s[index]-'0';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin>>q;
    while(q--){
        int k;
        cin>>k;
        cout<<solve(k)<<"\n";
    }
 
    return 0;
}
