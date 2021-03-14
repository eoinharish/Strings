#include<bits/stdc++.h>
using namespace std;

//coding ninjas video
vector<string> findSubsequences(string s)
{
    if(s.length()==0)
    {
        vector<string> ans{""};
        return ans;
    }
    vector<string> smallAns=findSubsequences(s.substr(1));     //smallAns gives us the subsequences of 'yz'

    vector<string> ans(smallAns.size() * 2);

    for(int i=0;i<smallAns.size();i++)
    {
        ans[i]=smallAns[i]; 
    }
    for(int i=0;i<smallAns.size();i++)
    {
        ans[smallAns.size()+i]= s[0]+smallAns[i];
    }
    return ans;
}
int main()
{
    vector<string> v;
    v=findSubsequences("xyz");
    //sort(v.begin(),v.end());    for lexicographically sorted

    for(string s:v)
    {
        cout<<s<<endl;
    }

}