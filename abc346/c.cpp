#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int tmp_a;
    set<int> a;
    for(int i=0; i<n; i++){
        cin >> tmp_a;
        a.insert(tmp_a);
    }

    long long sum=0;
    sum =(long long) (1+k)*k/2;

    for(int i: a){
        if(i<=k){
            sum = sum - i;
        }
    }

    cout << sum << endl;
    return 0;
}