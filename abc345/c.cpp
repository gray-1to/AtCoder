#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    map<char, long long> c_set;
    for(char c : s){
        c_set[c] = c_set[c] + 1;
    }

    long long res = s.size()*s.size();
    bool original = false;
    for(auto& [c, count]: c_set){
        res -= count*count;
        if(count>1) original = true;
    }
    res/=2;
    if(original)res+=1;
    cout << res << endl;
    return 0;
}