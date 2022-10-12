#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    long long ab[n][2];
    for (int i = 0; i < n; i++) {
        cin >> ab[i][0] >> ab[i][1];
    }
    long long dp[n][x + 1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < x + 1; j++) {
            dp[i][j] = pow(10, 10);
        }
    }
    for (int i = n; i > -1; i--) {
        if (i == n) {
            dp[0][i] = ab[0][0];
        } else {
            dp[0][i] = dp[0][i + 1] + ab[0][1];
        }
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < x + 1; j++) {
            long long min_holder = pow(10, 10);
            for (int k = 1; k <= (x - i); k++) {
                min_holder = min(min_holder, dp[i - 1][k] + ab[i][0] + ab[i][1] * k);
            }
            dp[i][j] = min_holder;
        }
    }
    long long ans = pow(10, 10);
    for (int i = 0; i < n; i++) {
        ans = min(ans, dp[i][0]);
    }
    cout << ans << endl;
    return 0;
}