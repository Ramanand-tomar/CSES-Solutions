/*
 * Problem Name: Palindrome Reorder
 * Problem ID: 1755
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1755
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    cin>>str;
    vector<int>alpha(26,0);
    for(int i = 0 ; i < str.size() ; i++){
        alpha[str[i]-'A']++;
    }
    int count = 0;
    for(int i = 0 ; i < 26 ; i++){
        if(alpha[i]%2 != 0){
            count++;
        }
    }
    if(count > 1){
        cout<<"NO SOLUTION\n";
        return 0;
    }
    string ans(str.size(), ' ');
    int start = 0 , end = str.size()-1;
    for(int i = 0 ; i < str.size() ; i++){
        if(alpha[str[i]]%2 == 1){
            // odd
            ans[str.size()/2] = str[i];
            alpha[str[i]]--;
 
        }
        while(alpha[str[i]]>0){
            ans[start] = ans[end] = str[i];
            left++;
            right--;
            alpha[str[i]] -= 2;
        }
    }
    cout<<ans<<"\n";
 
 
 
 
    return 0;
}
