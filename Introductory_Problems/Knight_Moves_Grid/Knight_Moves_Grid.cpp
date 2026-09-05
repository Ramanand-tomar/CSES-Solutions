/*
 * Problem Name: Knight Moves Grid
 * Problem ID: 3217
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/3217
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<vector<int>>dist(n , vector<int>(n, -1));
    queue<pair<int,int>>q;
    q.push({0,0});
    dist[0][0] = 0;
     // Knight's 8 moves
    int dr[] = {2, 2, -2, -2, 1, 1, -1, -1};
    int dc[] = {1, -1, 1, -1, 2, -2, 2, -2};
    while(!q.empty()){
        auto [r,c] = q.front();
        q.pop();
        for(int k = 0 ; k < 8 ; k++){
            int nr = dr[k] + r;
            int nc = dc[k] + c;
 
            // check boundary
            if (nr < 0 || nr >= n || nc < 0 || nc >= n)
                continue;
            
            if(dist[nr][nc] != -1){
                continue;
            }
            dist[nr][nc] = dist[r][c] + 1;
            q.push({nr,nc});
            
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                cout<<dist[i][j]<<" ";
            }
            cout<<'\n';
        }
        
    }
 
 
 
 
    return 0;
}
