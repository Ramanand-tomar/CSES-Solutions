/*
 * Problem Name: Tower of Hanoi
 * Problem ID: 2165
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/2165
 */

#include <bits/stdc++.h>
using namespace std;
void toi(int n , int left , int middle , int right){
    if(n == 0){
        return;
    }
    toi(n-1 , left ,right , middle);
    cout<<left <<" "<<right <<"\n";
    toi(n-1 , middle , left , right);
}
 
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    // total minimum moves
    cout<<(1<<n)-1<<"\n";
    toi(n , 1,2,3); // left , middle , right
 
 
 
    return 0;
}
