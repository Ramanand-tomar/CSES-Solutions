/*
 * Problem Name: Repetitions
 * Problem ID: 1069
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1069
*/

#include <bits/stdc++.h>using namespace std; int main() {    ios::sync_with_stdio(false);    cin.tie(nullptr);    string s;    cin>>s;    int maxi = 1;    int counter = 1;    for(int i = 1 ; i < s.size() ; i++){        if(s[i] == s[i-1]){            counter++;            maxi = max(maxi , counter);        }        else{            counter = 1;        }    }    cout<<maxi<<" ";            return 0;}