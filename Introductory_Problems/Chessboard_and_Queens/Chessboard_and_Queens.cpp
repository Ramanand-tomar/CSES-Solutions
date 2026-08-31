/*
 * Problem Name: Chessboard and Queens
 * Problem ID: 1624
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1624
 */

#include <bits/stdc++.h>
using namespace std;
int ways = 0;
bool cols[8] , diag1[8] , diag2[8];
 
void solve(int r , vector<string>&board){
    if(r == 8){
        ways++;
        return;
    }
 
    for(int c = 0 ; c < 8 ; c++){
        if(board[r][c] == '.' && !cols[c] && !diag1[r+c] && !diag2[r-c+7]){
            // Mark column and diagonals as occupied
            cols[c] = diag1[r + c] = diag2[r - c + 7] = true;
 
            // Recurse to the next row
            solve(r + 1, board);
 
            // Backtrack: unmark the column and diagonals
            cols[c] = diag1[r + c] = diag2[r - c + 7] = false;
        }
    }
     
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string>board
    for(int i = 0 ; i < 8 ; i++){
        cin>>board[i];
    }
    solve(0 , board);
    cout<<ways<<"\n";
 
 
 
    return 0;
}
