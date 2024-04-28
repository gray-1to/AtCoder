#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    stack<int> s;
    for(int i=0; i<n; i++){
        s.push(a[i]);
        if(s.size()>1){
            while(s.size()>1){
                int first, second;
                first = s.top();
                s.pop();
                if(s.top()==first){
                    second = s.top();
                    s.pop();
                    s.push(second+1);
                }else{
                    s.push(first);
                    break;
                }
            }
        }

        
    }

    cout << s.size() << endl;
    return 0;
}