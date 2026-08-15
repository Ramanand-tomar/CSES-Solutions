/*
 * Problem Name: Coin Piles
 * Problem ID: 1754
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1754
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool solve(ll a , ll b){
    if((a+b)%3 == 0 && max(a,b) <= 2*min(a,b)){
        return 1;
    }
    else{
        return 0;
    }
    
 
 
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll a ,b;
        cin>>a>>b;
        bool ans = solve(a,b);
        if(ans){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
 
 
 
    return 0;
}
