#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w, c, res = 1000000000, cost;
    cin >> h >> w >> c;
    int a[h][w];
    for (int i = 0;i < h;i++) {
        for (int j = 0;j < w;j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0;i < (h * w);i++) {
        for (int j = 1;j < (h * w - i);j++) {
            cost = a[i / h][i % w] + a[(i + j) / h][(i + j) % w] + c * ((j / h) + (j % w));
            if (res > cost) {
                res = cost;
                cout << i / h << "," << i % h << "と" << (i + j) / h << "," << (i + j) % h << endl;
            }
        }
    }
    cout << res << endl;
    return 0;
}