#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    int h, m;
    m = k % 60;
    h = ((k / 60 + 21) % 24);

    if(m<10){
        cout << h << ":" << "0" << m << endl;
    }else{
        cout << h << ":" << m << endl;
    }
    return 0;
}