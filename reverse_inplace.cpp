#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="123456";
    for(int i=0,j=s.length()-1;i<j;i++,j--)
    {
        int temp;
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    cout<<s;
}