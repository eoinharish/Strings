#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="geeksforgeeks";
    unordered_map<char,int>m;
    for(int i=0;s[i];i++)
    {
        m[s[i]]++;
    }
    for(auto it=m.begin();it!=m.end();it++)
    {
        if(it->second > 1)
            cout<<it->first<<" ";
    }

   
}

