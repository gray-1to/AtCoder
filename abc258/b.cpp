#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    long long line;
    for (int i = 0; i < n; i++) {
        cin >> line;
        for (int j = n - 1; j > -1; j--) {
            a[i][j] = line / pow(10, j);
            line = line % (long long)pow(10, j);
            // printf("%d\n", a[i][j]);
        }
    }
    int dir[8][2] = {
        {0, 1},
        {1, 0},
        {0, -1},
        {-1, 0},
        {1, 1},
        {1, -1},
        {-1, 1},
        {-1, -1}};
    int x, y, dx, dy;
    long long point;
    long long maxPoint[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < 8; k++) {
                // printf("%d", k);
                x = i;
                y = j;
                dx = dir[k][0];
                dy = dir[k][1];
                point = 0;
                // printf(" %d %d", dx, dy);
                for (int l = 0; l < n; l++) {
                    // printf(" (%d %d) %d ", x, y, point);
                    point = point * 10 + a[x][y];
                    x += dx;
                    y += dy;
                    if (x < 0 || x <= n) {
                        x = (x % n + n) % n;
                    }
                    if (y < 0 || y <= n) {
                        y = (y % n + n) % n;
                    }
                }
                // printf("%d\n", point);
                if (k == 0) {
                    maxPoint[i][j] = point;
                } else {
                    maxPoint[i][j] = max(maxPoint[i][j], point);
                }
            }
        }
    }
    long long res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res = max(res, maxPoint[i][j]);
        }
    }
    cout << res << endl;

    return 0;
}