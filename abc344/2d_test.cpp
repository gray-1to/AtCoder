#include <bits/stdc++.h>
#include <bitset>
#include <typeinfo>
using namespace std;

#define rep(i, n) for(int i=0; i<n; i++)

int main() {
    string t;
    int n = 3;
    cin >> t;
    vector<vector<string> > s(n, vector<string>());
    rep(i, n){
        rep(j, 2){
            s[i].push_back(t);
        }
    }
    rep(i, n){
        rep(j, 2){
            cout << s[i][j];
        }
        cout << endl;
    }

    // // 動的計画法にて解く
    // // dp[見ているバックid][完成した文字数]
    // int dp[n][t.size()+1];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<105;j++){
    //         dp[i][j]=1e9;
    //     }
    // }
    // dp[0][0]=0;

    // rep(k, n){
    //     // このバックでは何もしない場合
    //     rep(content_len, t.size()){
    //         dp[k+1][content_len]=dp[k][content_len];
    //     }
    //     // S_k,sidが使えるか
    //     rep(sid, s[k].size()){
    //         rep(start_cid, t.size()-s[k][sid].size()+1){
    //             bool ok = true;
    //             rep(cid, s[k][sid].size()){
    //                 if(t[start_cid+cid]!=s[k][sid][cid]){
    //                     ok = false;
    //                     break;
    //                 }
    //             }
    //             if(ok) dp[k+1][start_cid+s[k][sid].size()]=min(dp[k+1][start_cid+s[k][sid].size()]+1, dp[k][start_cid+s[k][sid].size()])
    //         }
    //     }
    // }

    // if(dp[n+1][t.size()]>5e8){dp[n+1][t.size()] = -1;}
    // cout << dp[n][t.size()] << endl;
    return 0;
}