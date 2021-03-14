#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="aabba";
    string s1=s;
    reverse(s.begin(),s.end());
    if(s1 == s)
    cout<<"palindrome";
    else cout<<"not";
    
    
}