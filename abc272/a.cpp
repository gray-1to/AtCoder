#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0,a;
    for(int i=0; i<n; i++){
        cin >> a;
        sum += a;
    }
    cout << sum << endl;
    return 0;
}
