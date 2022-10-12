#include <bits/stdc++.h>
using namespace std;
#define mod 998244353

int main() {
    int n, res = 0;
    cin >> n;
    int dp[n + 1][10];
    // for (int i = 1; i < 10; i++) {
    //     res += std::pow(3, n - 1);
    //     // cout << "added res = " << res << endl;
    //     if (i < n) {
    //         res -= (std::pow(3, n - i) - 1) / 2;
    //     }
    //     if (10 - n < i) {
    //         res -= (std::pow(3, i + n - 10) - 1) / 2;
    //         // cout << (std::pow(3, i + n - 10) - 1) / 2;
    //     }
    //     cout << res << endl;
    // }

    for (int i = 1;i < 10;i++) {
        dp[1][i] = 1;
    }
    for (int i = 2;i <= n;i++) {
        for (int j = 1;j < 10;j++) {
            dp[i][j] = dp[i - 1][j] % mod;
            if (j != 1) {
                dp[i][j] += dp[i - 1][j - 1] % mod;
            }
            if (j != 9) {
                dp[i][j] += dp[i - 1][j + 1] % mod;
            }
        }
    }
    for (int i = 1;i < 10;i++) {
        res += dp[n][i];
    }
    cout << res % mod << endl;
    return 0;
}