/*
 * Problem Name: Weird Algorithm
 * Problem ID: 1068
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1068
*/

#include <bits/stdc++.h>using namespace std; int main() {    ios::sync_with_stdio(false);    cin.tie(nullptr);    int n;    cin>>n;    while(n != 1){        cout<<n<<"\n";        if(n%2 == 0){            n /= 2;        }        else{            n = 3*n + 1;        }    }       return 0;}