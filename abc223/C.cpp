#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double t = 0, needtime = 0, answer = 0;
    cin >> n;
    double a[n], b[n];
    for (int i = 0;i < n;i++) {
        cin >> a[i] >> b[i];
        needtime += a[i] / b[i];
    }
    t = needtime / 2;

    for (int i = 0;i < n;i++) {

        if (t > 0) {
            if (t > a[i] / b[i]) {
                answer += a[i];
                t -= a[i] / b[i];

            }
            else {
                answer += t * b[i];
                t = 0;

            }
        }
    }
    cout << fixed << setprecision(15) << answer << endl;
    return 0;
}