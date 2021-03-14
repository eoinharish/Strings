#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1="harish";
    string s2="rawat";
    string ans=s1.append(s2);               //s1+s2   or s1.append(s2)   but s1.append(s2) is fast
    cout<<ans;
    return 0;
}