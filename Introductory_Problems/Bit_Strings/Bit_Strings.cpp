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
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    ll a = 1;
    int t = n;
    while(n){
        if(n == t){
            a = 2*a;
        }
        else{
            a = (1ll*a*a)%MOD;
        }
        
    }
    cout<<a<<"\n";
 
 
 
    return 0;
}
