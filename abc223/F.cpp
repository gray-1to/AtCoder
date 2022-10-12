#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q, qnum, l, r, count_left;
    char stock;
    string s;
    bool true_string;
    cin >> n >> q;
    cin >> s;
    for (int i = 0;i < q;i++) {
        cin >> qnum >> l >> r;
        if (qnum == 1) {
            stock = s[l - 1];
            s[l - 1] = s[r - 1];
            s[r - 1] = stock;
        }
        else if (qnum == 2) {
            count_left = 0;
            true_string = true;
            for (int j = 0;j < (r - l + 1);j++) {
                if (s[j + l - 1] == '(') {
                    count_left += 1;
                }
                else {
                    count_left -= 1;
                    if (count_left < 0) {
                        true_string = false;
                    }
                }
            }
            if (!true_string || count_left != 0)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }
    return 0;
}