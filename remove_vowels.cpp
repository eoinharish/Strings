#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="harish rawat";
    string ans="";

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            continue;
        }
        ans.push_back(s[i]);
    }
    cout<<ans;
}