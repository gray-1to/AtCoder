#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i = 0;
    bool unfound = true;
    cin >> n;
    string input;
    cin >> input;
    while (unfound) {
        if (input[i] == '1') {
            unfound = false;
            if (i % 2 == 0) {
                cout << "Takahashi" << endl;
            }
            else {

                cout << "Aoki" << endl;
            }
        }
        i++;
    }
    return 0;
}