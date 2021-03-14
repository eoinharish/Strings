#include<bits/stdc++.h>
using namespace std;

// Given a string S with repeated characters (only lowercase).
// The task is to rearrange characters in a string such that no two adjacent characters are same.
// print the generated string that doesn't contains any same adjacent characters, else if no such string is possible ,print ""


int main()
{
    string s;
    cin>>s;
    unordered_map<char,int> m;
    int flag=0;
    string ans="";
    for(char c:s)
    {
        m[c]++;
    }
    
    priority_queue<pair<int,char>> pq;             
    for(auto it=m.begin();it!=m.end();it++)
    {
        pq.push({it->second,it->first});

    } 

    
    while(!pq.empty())
    {
        pair<int,char>curr=pq.top();
        pq.pop();
        ans+=curr.second;
        if(!pq.empty())
        {
            pair<int,char>next=pq.top();
            pq.pop();
            ans+=next.second;
            next.first--;
            if(next.first>0)
            {
                pq.push({next.first,next.second});
            }
        }
        curr.first--;
        if(curr.first>0)
        {
            pq.push({curr.first,curr.second});
        }                                                                                  
    }

    for(int i=1;i<ans.length();i++)
    {
        if(ans[i]==ans[i-1]){
            flag=1;
            break;
        }
    }
    if(flag==1)cout<<" ";
    else cout<<ans;
    


}