//
// Created by Junhao on 2023/3/18.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    string a,b;
    cin >>a>>b;
    int len1=a.size();
    int len2=b.size();
    if(len1<len2) {
        for(int i=0;i<len2-len1;i++) {
            a.insert(0,"0");
        }
    }
    else {
        for(int i=0;i<len1-len2;i++) {
            b.insert(0,"0");
        }
    }
    cout<<a<<"\n"<<b<<endl;
    return 0;
}