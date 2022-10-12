#include <bits/stdc++.h>
using namespace std;

int main() {
    int v,a,b,c;
    cin >> v >> a >> b >> c;

    v=v%(a+b+c);

    if(v<a){
        cout << "F" << endl;
    }else if(v<(a+b)){
        cout << "M" <<endl;
    }else{
        cout << "T" <<endl;
    }
    return 0;
}