#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
        cin>>n;
	    string s;
	    vector<string>v;
	    for(int i=0;i<n;i++)
	    {
	        cin>>s;
	        v.push_back(s);
	    }
	    map<string,int>m;
	    for(string x:v)
	    {
	        m[x]++;
	    }
	    int fmax=INT_MIN;
	    int smax=INT_MIN;
	    
	    for(auto it=m.begin();it!=m.end();it++)
	    {
	        if(it->second >fmax)
	        {
	            smax=fmax;
	            fmax=it->second;
	        }
	        else if(it->second>smax)
	        {
	            smax=it->second;
	        }
	        
	    }
	    cout<<smax<<endl;
	    
	}
	return 0;
}