#include <bits/stdc++.h>
#include <bitset>
#include <typeinfo>
using namespace std;

#define rep(i, n) for(int i=0; i<n; i++)

int main() {
    string t;
    int n;
    cin >> t >> n;
    vector<vector<string> > s(n, vector<string>());
    rep(i, n){
        int a;
        cin >> a;
        rep(j, a){
            string tmp;
            cin >> tmp;
            s[i].push_back(tmp);
        }
    }

    // 動的計画法にて解く
    // dp[見ているバックid+1][完成した文字数]
    int dp[n+1][t.size()+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<t.size()+1;j++){
            dp[i][j]=1e9;
        }
    }
    dp[0][0]=0;

    rep(bag_id, n){
        // このバックでは何もしない場合
        rep(content_len, t.size()+1){
            dp[bag_id+1][content_len]=dp[bag_id][content_len];
        }
        // S_k,sidが使えるか
        rep(s_id, s[bag_id].size()){
            rep(start_cid, t.size()-s[bag_id][s_id].size()+1){
                bool ok = true;
                rep(cid, s[bag_id][s_id].size()){
                    if(t[start_cid+cid]!=s[bag_id][s_id][cid]){
                        ok = false;
                        break;
                    }
                }
                if(ok) dp[bag_id+1][start_cid+s[bag_id][s_id].size()]=min(dp[bag_id+1][start_cid+s[bag_id][s_id].size()], dp[bag_id][start_cid]+1);
            }
        }
    }

    if(dp[n][t.size()]>5e8){dp[n][t.size()] = -1;}
    cout << dp[n][t.size()] << endl;
    return 0;
}