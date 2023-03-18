//
// Created by Junhao on 2023/3/18.
//
#include <bits/stdc++.h>
using namespace std;
string xx;
string pointxx;
int reciter;
string flag="not point";
int main() {
    cin>>xx;
    int len=xx.size();
    for(int i=0;i<len;i++) {
        if(xx[i]=='.') {
            flag="point";
        }
        if(xx[i]!='0'&&flag=="not point") {
            cout<<xx[i];
        }
    }
    cout<<".";
    return 0;
}