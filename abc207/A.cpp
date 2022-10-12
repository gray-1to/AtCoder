#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, max;
    cin >> a >> b >> c;
    max = a + b;
    if (max < b + c)max = b + c;
    if (max < a + c)max = a + c;
    cout << max << endl;
    return 0;
}