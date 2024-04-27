#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m;
    bool all_met = true, met[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            met[i][j] = false;
        }
    }
    for(int i=0; i<m ; i++){
        cin >> k;
        int x[k];
        for(int j=0; j<k ; j++){
            cin >> x[j];
        }
        //solvation
        for(int target1=0; target1<k; target1++){
            for(int target2=target1+1; target2<k ; target2++){
                met[x[target1]-1][x[target2]-1] = true;
                met[x[target2]-1][x[target1]-1] = true;
            }
        }
    }
    for(int i=0; i<n && all_met; i++){
        for(int j=0; j<n && all_met; j++){
            if(i!=j&&!met[i][j]) all_met=false;
        }
    }
    if(all_met){
        cout << "Yes" <<endl;
    }else{
        cout << "No" <<endl;
    }

    // for(int i=0; i<n ; i++){
    //     for(int j=0; j<n; j++){
    //         if(met[i][j]){
    //             cout << "t";
    //         }else{
    //             cout << "f";
    //         }
    //     }
    //     cout << endl;
    // }
    return 0;
}
