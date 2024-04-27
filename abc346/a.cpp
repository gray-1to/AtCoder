#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[N];
    for (int i=0; i<N; i++){
        cin >> a[i];
    }
    for (int i=0; i<N-1; i++){
        cout << a[i] * a[i+1] << ' ';
    }

    cout << endl;
    return 0;
}