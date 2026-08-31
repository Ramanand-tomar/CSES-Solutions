/*
 * Problem Name: Creating Strings
 * Problem ID: 1622
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1622
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    cin>>s;
    sort(s.begin() , s.end());
    vector<string>perms;
 
    do{
        perms.push_back(s);
 
    }while(next_permutation(s.begin() , s.end()));
    cout<<perms.size()<<"\n";
    for(int i = 0 ; i < perms.size() ; i++){
        cout<<perms[i]<<"\n";
    }
 
 
 
    return 0;
}
