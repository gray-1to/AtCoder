#include <bits/stdc++.h>
using namespace std;

int main() {
    // int a, b, c, d, blue, red, count = 0;
    // cin >> a >> b >> c >> d;
    // blue = a;
    // red = 0;
    // if (c * d > b) {
    //     while (blue > red * d) {
    //         blue += b;
    //         red += c;
    //         count += 1;
    //     }
    // }
    // else {
    //     count = -1;
    // }
    // cout << count << endl;
    // return 0;
    double a, b, c, d;
    int count = 0;
    cin >> a >> b >> c >> d;
    if (c * d > b) {
        count = (int)ceil(a / (c * d - b));
        cout << count << endl;
    }
    else {
        cout << -1 << endl;
    }
}