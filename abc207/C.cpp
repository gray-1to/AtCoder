#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[2000][4], count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i][1] >> a[i][2] >> a[i][3];
    }
    for (int i = 0;i < n;i++) {
        for (int j = i + 1;j < n;j++) {
            if (a[i][1] % 2 == 1 && a[j][1] < 3 && a[i][3] == a[j][2]) {
                count++;
            }
            else if (a[j][1] % 2 == 1 && a[i][1] < 3 && a[j][3] == a[i][2]) {
                count++;
            }
            else if (a[i][3] <= a[j][2] || a[j][3] <= a[i][2]) {

            }
            else {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}