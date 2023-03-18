//
// Created by Junhao on 2023/3/18.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
int a[N], b[N], result[N];
string s1, s2;
int lena, lenb, lenmax;
bool fu = false;
bool checkzf()
{
    int flag = 0;
    if(lena > lenb) return true;
    if(lena < lenb) return false;
    if(lena == lenb)
    {
        for(int i = lena - 1; i >= 0; i--)
        {
            if(a[i] > b[i])
            {
                flag = 1;
                return true;
            }
            if(a[i] < b[i])
            {
                flag = 1;
                return false;
            }
        }
    }
    if(flag == 0) return true;
}
int main()
{
    cin >> s1 >> s2;
    lena = s1.size();
    lenb = s2.size();
    lenmax = max(lena, lenb);
    //倒序存储
    for(int i = 0; i < lena; i++) a[i] = s1[lena - i - 1] - '0';
    for(int i = 0; i < lenb; i++) b[i] = s2[lenb - i - 1] - '0';
    if(checkzf())
    {
        for(int i = 0; i < lena; i++)
        {
            if(a[i] < b[i])
            {
                a[i + 1]--;
                a[i] += 10;
            }
            result[i] = a[i] - b[i];
        }
    }
    else
    {
        fu = true;
        for(int i = 0; i < lenmax; i++)
        {
            if(b[i] < a[i])
            {
                b[i + 1] -= 1;
                b[i] += 10;
            }
            result[i] = b[i] - a[i];
        }
    }
    int tmp = lenmax;
    while(result[tmp] == 0 && tmp > 0) tmp--;
    if(fu) printf("-");
    for(int i = tmp; i >= 0; i--) cout << result[i];
    return 0;
}