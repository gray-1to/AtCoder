#include <bits/stdc++.h>
using namespace std;

int main() {
    int diff = 0, tmp;
    for(int i=0; i<9; i++){
        cin >> tmp;
        diff = diff + tmp;
    }
    for(int i=0; i<8; i++){
        cin >> tmp;
        diff = diff - tmp;
    }

    cout << diff+1 << endl;
    return 0;
}