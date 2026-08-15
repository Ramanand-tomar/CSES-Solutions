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
    cin >> str;
 
    vector<int> alpha(26, 0);
 
    // Count frequency of each character
    for (char ch : str) {
        alpha[ch - 'A']++;
    }
 
    // Count characters with odd frequency
    int oddCount = 0;
 
    for (int i = 0; i < 26; i++) {
        if (alpha[i] % 2 != 0) {
            oddCount++;
        }
    }
 
    // A palindrome can have at most one character
    // with an odd frequency
    if (oddCount > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }
 
    string ans(str.size(), ' ');
 
    int left = 0;
    int right = str.size() - 1;
 
    // Put pairs of characters at both ends
    for (int i = 0; i < 26; i++) {
 
        // Put the odd-frequency character in the middle
        if (alpha[i] % 2 != 0) {
            ans[str.size() / 2] = char('A' + i);
            alpha[i]--;
        }
 
        // Put pairs on both sides
        while (alpha[i] > 0) {
            ans[left] = char('A' + i);
            ans[right] = char('A' + i);
 
            left++;
            right--;
 
            alpha[i] -= 2;
        }
    }
 
    cout << ans << '\n';
 
    return 0;
}
