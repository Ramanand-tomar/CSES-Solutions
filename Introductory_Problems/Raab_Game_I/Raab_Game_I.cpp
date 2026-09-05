/*
 * Problem Name: Raab Game I
 * Problem ID: 3399
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/3399
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n , a , b;
        cin>>n>>a>>b;
        if(a+b > n || (a==0) != (b == 0)){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        vector<int>p1(n),p2(n);
        iota(p1.begin() , p1.end(), 1);
        if(a == 0 && b == 0){
            p2 = p1;
        }
        else{
            int m = (a+b);
            for(int i = 0 ; i < m ; i++){
                p2[i] = (i + a)%m + 1;
 
            }
            for(int i = m ; i < n ; i++){
                p2[i] = (i+1);
            }
        }
        for(auto x : p1){
            cout<<x<<" ";
        }
        cout<<"\n";
        for(auto x : p2){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
 
 
 
 
    return 0;
}
