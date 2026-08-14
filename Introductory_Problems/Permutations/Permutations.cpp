/*
 * Problem Name: Permutations
 * Problem ID: 1070
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1070
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n ;
    cin>>n;
    if(n < 4 && n > 1){
        cout<<"NO SOLUTION";
        return 0;
    }
    
    int x = 1;
    for(int i = 0 ; i < n ; i++){
        if(x%2 == 0){
            cout<<x<<" ";
        }
 
    }
    x = 1;
    for(int i = 0 ; i < n ; i++){
        if(x%2 != 0){
            cout<<x<<" ";
        }
    }
 
    
 
 
 
    return 0;
}
