#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long e_max1 = -1, e_max2 = -1, o_max1 = -1, o_max2 = -1, a;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a % 2 == 0){
            if(e_max1<=a){
                e_max2 = e_max1;
                e_max1 = a;
            }else if(e_max2<=a){
                e_max2 = a;
            }
        }else{
            if(o_max1<=a){
                o_max2 = o_max1;
                o_max1 = a;
            }else if(o_max2<=a){
                o_max2 = a;
            }
        }
    }
    long long max = -1;
    if(e_max1>=0&&e_max2>=0) max = e_max1 + e_max2;
    if(o_max1>=0&&o_max2>=0&&max<o_max1+o_max2) max = o_max1 + o_max2;
    cout << max << endl;
    return 0;
}
