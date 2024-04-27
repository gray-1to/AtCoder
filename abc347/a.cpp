#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, a;
    cin >> N >> K;
    for (int i=0; i<N; i++){
        cin >> a;
        if (a % K == 0){
            cout << a/K << ' ';
        }
    }
    cout << endl;
    return 0;
}