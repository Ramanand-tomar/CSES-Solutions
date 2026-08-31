/*
 * Problem Name: Apple Division
 * Problem ID: 1623
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1623
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int n;
vector<ll>apples;
ll total_sum = 0;
ll min_difference = -1;
 
void finding_difference(int index , int group1_sum){
    if(n == index){
        ll group2_sum = total_sum - group1_sum;
        ll current_diffrence = abs(group2_sum - group1_sum);
        if(min_difference == -1 || current_diffrence < min_difference){
            min_difference = current_diffrence;
        }
        return;
    }
    // taking the current element
    finding_difference(index+1 , group1_sum + apples[index]);
    // skip the current element
    finding_difference(index + 1 , group1_sum);
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>apples[i];
        total_sum += apples[i];
    }
 
    finding_difference(0 , 0);
    cout<<min_difference<<"\n";
 
 
 
    return 0;
}
