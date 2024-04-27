#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, a, b;
    cin >> n >> a >> b;
    // int d, min=pow(10,9)+1, max=-1;
    long long d, min, max;
    for (int i=0; i<n; i++){
        cin >> d;
        d = d%(a+b);

        if (i == 0){
            min = d;
            max = d;
        }else{
            if(d<min){
                min = d;
            }
            if(d>max){
                max = d;
            }
        }
    }
    if(max - min < a){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}