/*
 * Problem Name: Gray Code
 * Problem ID: 2205
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/2205
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n ;
    cin>>n;
    int times = 1<<n;
    for(int i = 0 ; i < times ; i++){
        int val = i^(i>>1); // it gives decimal like 3
        // decimal to binary
        for(int j = n-1 ; j>=0 ; j--){
            cout<<((val>>j)&1);
        }
        cout<<"\n";
    }
 
    return 0;
}
