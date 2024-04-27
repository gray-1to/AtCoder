#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, b;
    cin >> w >> b;
    string key = "wbwbwwbwbwbw";
    bool answer = false;

    for(int start=0; start<key.size(); start++){
        int w_count=0, b_count=0;
        for(int i=0; i<w+b; i++){
            if(key[(start+i)%key.size()]=='w'){
                w_count++;
            }else{
                b_count++;
            }
            if((w_count==w)&&(b_count==b)){
                answer = true;
            }
        }
    }
    if(answer){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}