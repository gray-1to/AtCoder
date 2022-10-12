#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    char s[n];
    cin >> s;
    long long lotate_num = 0;
    int first, second;
    for (int i = 0; i < q; i++) {
        cin >> first >> second;
        if (first == 1) {
            lotate_num += second;
        } else {
            int index = second - lotate_num % n -1;
            if(index < 0){
                index += n;
            }else if(index >= n){
                index %= n;
            }
            cout << s[index] << endl;
        }
    }

    return 0;
}