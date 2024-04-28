#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    string b;
    int res_i, res_j;
    for(int i=0; i<n; i++){
        cin >> b;
        for(int j=0; j<n; j++){
            if(a[i][j] != b[j]){
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }
        }
    }
    return 0;
}