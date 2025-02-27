#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1, 0), b(n + 1, 0);
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];

        vector<vector<int>> dp(n + 1, vector<int>(2, INT_MIN));

        dp[0][0] = dp[0][1] = 0;

        for (int i = 1; i <= n; i++) {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
            if (i == n) {
                dp[i][1] = dp[i - 1][0] + a[i];
            } else {
                dp[i][1] = dp[i - 1][0] + a[i] - b[i + 1];
            }
        }

        cout << max(dp[n][0], dp[n][1]) << "\n";
    }

    return 0;
}