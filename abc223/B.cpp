#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, fastest, latest;
    char stock;
    int length;
    cin >> s;
    fastest = s;
    latest = s;
    length = s.length();
    for (int i = 0;i < length;i++) {
        stock = s[0];
        for (int j = 0;j < (length - 1);j++) {
            s[j] = s[j + 1];
        }
        s[length - 1] = stock;
        if (s < fastest) {
            fastest = s;
        }
        else if (s > latest) {
            latest = s;
        }
    }
    cout << fastest << endl << latest << endl;
    return 0;
}