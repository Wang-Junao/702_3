//
// Created by Junhao on 2023/3/18.
//
#include <bits/stdc++.h>
using namespace std;
const int N=1010;
int a[N],b[N],c[N];
void invertElem(char s[], size_t n)
{
    size_t len = n-1;
    for(size_t i=0,j=len;i<j;i++,j--)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
void charInt(char s[], size_t n)
{
    for(size_t i=0; i<n; i++)
        s[i]-=48;
}
int main() {

    return 0;
}