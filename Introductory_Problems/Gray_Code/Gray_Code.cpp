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
    int times = pow(2,n);
    for(int i = 0 ; i < times ; i++){
        cout<<(i^(i>>1))<<"\n";
    }
 
 
 
 
    return 0;
}
