/*
 * Problem Name: Number Spiral
 * Problem ID: 1071
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1071
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x , y;
        cin>>x>>y;
        int size = max(x,y);
        int start = pow(size-1,2)+1;
        int end = pow(size , 2);
        int mid = (start + end)/2;
        int x1 = size-x;
        int y1 = size-y;
        if(x1 == 0 && y1 == 0){
            cout<<mid<<"\n";
        }
        if(size%2 == 0){
            // right to left sort
            if(y1 == 0){
                cout<<mid-x1<<"\n";
            }
            else if(x1 == 0){
                cout<<mid+y1<<"\n";
 
            }
        }
        else{
            // left to right sort
            if(y1 == 0){
                cout<<mid+x1<<"\n";
            }
            else if(x1 == 0){
                cout<<mid-y1<<"\n";
 
            }
 
        }
        
    }
 
 
 
    return 0;
}
