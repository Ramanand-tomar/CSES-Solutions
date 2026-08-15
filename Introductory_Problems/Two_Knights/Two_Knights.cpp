/*
 * Problem Name: Two Knights
 * Problem ID: 1072
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1072
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n ;
    cin>>n;
    int sum = 0;
    vector<int>dx{1,1,2,2,-1,-1,-2,-2};
    vector<int>dy{2,-2,1,-1,2,-2,1,-1};
    
    for(int k = 1 ; k<= n ; k++){
        int sum = 0;
        int total = (k*k)*(k*k-1)/2;
        for(int i = 0 ; i < k ; i++){
            for(int j = 0 ; j < k ; j++){
                for(int m = 0 ; m < 8 ; m++){
                    int x = dx[m];
                    int y = dy[m];
                    if(x>=0 &&x < k && y >= 0 && y<k){
                        sum++;
                    }
                }
            }
        }
        int ans = total - sum/2;
        cout<<ans<<"\n";
    }
 
 
 
    return 0;
}
