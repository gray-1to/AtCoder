#include <bits/stdc++.h>
using namespace std;

int h, w;

bool check_movable(int i, int j, string* s){
    if(i=0){
        if(s[i+1][j]=='#') return false;
    }else if(i=h-1){
        if(s[i-1][j]=='#') return false;
    }else{
        if((s[i-1][j]=='#')||(s[i+1][j]=='#')) return false;
    }
    
    if(j=0){
        if(s[i][j+1]=='#') return false;
    }else if(i=w-1){
        if(s[i][j-1]=='#') return false;
    }else{
        if((s[i][j-1]=='#')||(s[i][j+1]=='#')) return false;
    }

    return true;
}

void search(int freeness[1000][1000], int i, int j, string *s){
    freeness[i][j]++;
    if(check_movable(i, j, s, h, w)){
        if(i>0) search(freeness, i-1, j, s, h, w);
        if(i<h) search(freeness, i+1, j, s, h, w);
        if(j>0) search(freeness, i, j-1, s, h, w);
        if(j>w) search(freeness, i, j+1, s, h, w);
    }
}

int main() {
    cin >> h >> w;
    string s[h];
    for(int i=0; i<h; i++){
        cin >> s[i];
    }

    int freeness[1000][1000];
    for(int i=0; i<1000; i++){
        for(int j=0; j<1000; j++){
            freeness[i][j] == 0;
        }
    }

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            search(freeness, i, j, s);
        }
    }

    int max=0;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(freeness[i][j]>max) max = freeness[i][j];
        }
    }

    cout << max << endl;
    return 0;
}