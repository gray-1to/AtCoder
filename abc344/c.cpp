#include <bits/stdc++.h>
#include <bitset>
using namespace std;

#define rep(i, s) for(int i=0; i<s; i++)

int main() {
    // get input
    int n, m, l, q, tmp;
    cin >> n;
    unsigned a[n];
    rep(i, n){cin >> a[i];}
    
    cin >> m;
   unsigned b[m];
    rep(i, m){cin >> b[i];}
    
    cin >> l;
    unsigned c[l];
    rep(i, l){cin >> c[i];}
    
    cin >> q;
    unsigned x[q];
    rep(i, q){cin >> x[i];}
    
    // calc all sum
    bitset<300000001> sum;
    rep(i, n){
        rep(j, m){
            rep(k, l){
                sum[a[i]+b[j]+c[k]] = true;
            }
        }
    }

    rep(i, q){
        if(sum[x[i]]){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        } 
    }
    return 0;
}