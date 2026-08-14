/*
 * Problem Name: Missing_Number
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-14
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int sum = 0;
    for(int i = 0 ; i < n-1 ; i++){
        int x;
        cin>>x;
        sum += x;
    }
    int total = (n*(n+1)/2);
    int ans = total - sum;
    cout<<ans<<"\n";
 
 
 
 
    return 0;
}