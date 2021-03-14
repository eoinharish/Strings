#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    reverse(a,a+n);
    reverse(a+n-k,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"";
    }
}