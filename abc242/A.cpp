#include <bits/stdc++.h>
using namespace std;

int main() {
    long double a, b, c, x;
    long double res;
    cin >> a >> b >> c >> x;

    if (x <= a) {
        res = 1;
    }
    else if (x > b) {
        res = 0;
    }
    else {
        res = c / (b - a);
    }
    cout << res << endl;
    return 0;
}