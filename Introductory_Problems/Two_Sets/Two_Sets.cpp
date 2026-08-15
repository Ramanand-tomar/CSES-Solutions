/*
 * Problem Name: Two Sets
 * Problem ID: 1092
 * Category: Introductory Problems
 * CSES URL: https://cses.fi/problemset/task/1092
 */

#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    // Sum = 1 + 2 + ... + n
    ll total_sum = 1LL * n * (n + 1) / 2;
 
    // If total sum is odd, equal partition is impossible
    if (total_sum % 2 != 0) {
        cout << "NO\n";
        return 0;
    }
 
    cout << "YES\n";
 
    ll target = total_sum / 2;
 
    vector<int> set1, set2;
    vector<bool> vis(n + 1, false);
 
    ll set1_sum = 0;
    int max_element = n;
 
    while (set1_sum < target) {
 
        ll remaining = target - set1_sum;
 
        if (remaining >= max_element) {
            // Take the largest element
            set1.push_back(max_element);
            vis[max_element] = true;
 
            set1_sum += max_element;
            max_element--;
        }
        else {
            // Remaining amount itself can be selected
            set1.push_back((int)remaining);
            vis[remaining] = true;
 
            set1_sum += remaining;
        }
    }
 
    // Put all unused elements into set2
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            set2.push_back(i);
        }
    }
 
    // Print set1
    cout << set1.size() << '\n';
 
    for (int x : set1) {
        cout << x << ' ';
    }
    cout << '\n';
 
    // Print set2
    cout << set2.size() << '\n';
 
    for (int x : set2) {
        cout << x << ' ';
    }
    cout << '\n';
 
    return 0;
}
