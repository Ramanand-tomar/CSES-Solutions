/*
 * Problem Name: Increasing Array
 * Problem ID: 1094
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1094
*/

#include <bits/stdc++.h>using namespace std; int main() {    ios::sync_with_stdio(false);    cin.tie(nullptr);    int n;    cin>>n;    vector<int>arr(n);    for(int i = 0 ; i < n ; i++){        int x ;        cin>>x;        arr[i] = x;    }    int moves = 0;    for(int i = 1 ; i < n ; i++){        if(arr[i-1] < arr[i]){            move += arr[i-1] - arr[i];            arr[i] = arr[i-1];        }    }    cout<<moves<<"\n";    return 0;}