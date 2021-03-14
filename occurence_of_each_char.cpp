#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s="geeks for geeks";
    unordered_map<char,int>m;
    for(int i=0;s[i]!='\0';i++)
    {
        m[s[i]]++;
    }
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" : "<<it->second<<endl;
    }

}