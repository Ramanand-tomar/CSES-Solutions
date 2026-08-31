/*
 * Problem Name: Creating Strings
 * Problem ID: 1622
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1622
 */

#include <bits/stdc++.h>
using namespace std;
vector<string>result;
int n;
vector<int>chars(26 , 0);
 
void generate(string curr){
    if(curr.length() == n){
        result.push_back(curr);
        return;
    }
    for(int i = 0 ; i < 26 ; i++){
        if(chars[i] > 0){
            chars[i]--;
            generate(curr + (char)('a' + i));
            chars[i]++;
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    cin>>s;
    n = s.size();
    for(int i = 0 ; i < s.size() ; i++){
        chars[s[i]-'a']++;
    }
    generate("");
    cout<<result.size()<<"\n";
    for(auto x : result){
        cout<<x<<"\n";
    }
 
    
 
 
 
    return 0;
}
