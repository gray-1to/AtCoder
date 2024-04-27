#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    int w, b;
    cin >> w >> b;
    // wbwbwwbwbwbwはw7つb5つからなる
    // 両端の区間を除き中心はw7つb5つの組み合わせで埋められる
    int w_set = w/7;
    int b_set = b/5;
    int set = min(w_set, b_set);
    w = w-set*7;
    b = b-set*5;
    

    string keys = "wbwbwwbwbwbw";
    string edge_keys = "";
    int w_count, b_count;
    bool yes_flag = false;
    for(int l = 0; l<13; l++){
        for(int r = 0; r<13; r++){
            edge_keys = keys.substr(12-l,l) + keys.substr(0, r);
            w_count = 0;
            b_count = 0;
            for(int i=0; i<edge_keys.size(); i++){
                if(edge_keys[i]=='w'){
                    w_count++;
                }else{
                    b_count++;
                }
            }
            cout << edge_keys << w_count << b_count << endl;
            if((w == w_count) && (b == b_count)){
                yes_flag = true;
            }
        }
    }
    if(yes_flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;   
}