#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int start,end,k,x=0,max=0;
    long n,m;
    cin>>n>>m;
    long int *a=new long int[n+1]();
    for(int i=0;i<m;i++)
    {
        cin>>start>>end>>k;
        a[start]+=k;
        if((end+1)<=n)
            a[end+1]-=k;
    }
    for(int i=1;i<n+1;i++)
    {
        x=x+a[i];
        if(max<x)
            max=x;

    }
    cout<<max;
    return 0;
    
}