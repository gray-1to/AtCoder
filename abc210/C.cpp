#include <bits/stdc++.h>
using namespace std;
#define COLOR 1000000000

int main() {
    int n, k, res;
    cin >> n >> k;
    bool  list[COLOR];
    int col[n], count[n - k] = { 0 };
    for (int i = 0;i < n;i++) {
        cin >> col[i];
    }
    for (int i = 0;i < (n - k);i++) {
        for (int j = 0;j < k;j++) {
            if (!list[col[i + j]]) {
                count[i] += 1;
                list[col[j]] = true;
            }
        }
        for (int a = 0;a < COLOR;a++) {
            list[a] = false;
        }
    }
    res = count[0];
    for (int i = 0;i < (n - k);i++) {
        if (count[i] > res) {
            res = count[i];
        }
    }
    cout << res << endl;
    return 0;
}