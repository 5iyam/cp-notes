#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> dp(n + 1, 0);

    // base case
    dp[0] = 0;

    // transition
    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i - 1];
    }

    cout << dp[n] << '\n';
}