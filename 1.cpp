//
// Created by Junhao on 2023/3/18.
//
#include <bits/stdc++.h>
using namespace std;
class HighSub {
public:
    string num;
};
bool operator>(const HighSub& a,const HighSub& b) {
    int len1=a.num.size();
    int len2=b.num.size();
    string inserter="0";
    if(len1<len2) {
        for(int i=0;i<len2-len1;i++) {
            cout<<a.num<<endl;
            a.num=a.num.insert(0,"0");
        }
    }
    else {
        for(int i=0;i<len1-len2;i++) {
            b.num=
        }
    }
}
int main() {

    return 0;
}