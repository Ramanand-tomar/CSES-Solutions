/*
 * Problem Name: Grid Coloring I
 * Problem ID: 3311
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/3311
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m , n;
    cin>>n>>m;
    vector<string>grid(n);
    for(int i = 0 ; i < n ; i++){
        string row ;
        cin>>row;
        grid[i] = row;
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if((i+j)%2 == 0){
                if(grid[i][j] == 'A'){
                    grid[i][j] = 'B';
                }
                else{
                    grid[i][j] = 'A';
                }
            }
            else{
                if(grid[i][j] == 'C'){
                    grid[i][j] = 'D';
                }
                else{
                    grid[i][j] = 'C';
                }
 
            }
        }
        
    }
    for(int i = 0 ; i < n ; i++){
        cout<<grid[i]<<"\n";
    }
 
 
    return 0;
}
