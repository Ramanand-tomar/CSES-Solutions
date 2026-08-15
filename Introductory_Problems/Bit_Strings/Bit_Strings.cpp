/*
 * Problem Name: Bit Strings
 * Problem ID: 1617
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1617
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
long long  MOD = 1e9 + 7;
ll power(ll a , ll b){
    ll ans = 1;
    while(b>0){
        if(b&1){
            ans = (1ll*ans*a)%MOD;
        }
        a = (1ll*a*a)%MOD;
        b >>= 1;
    }
    return ans;
 
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    
    cout<<power(2,n)<<"\n";
 
 
 
    return 0;
}
