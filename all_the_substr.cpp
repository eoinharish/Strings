#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="abc";
    for(int i=0;i<s.length();i++)
    {
        for(int len=1;len<=s.length()-i;len++)     //imp!!!!try len=1 to s.length() and then find why using s.length()-i
        {
            string temp=s.substr(i,len);       //s.substr(i, len) prints substring of length ‘len’ starting from index i in string s.
            cout<<temp<<" ";
        }
    }
    
}