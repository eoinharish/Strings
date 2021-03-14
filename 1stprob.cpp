#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int count_odd=0;
        int count_even=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2 == 0)
            {
                count_even++;
            }
            else{
                count_odd++;
            }
        }
        if(count_odd==0){
            cout<<"NO"<<endl;
        }
        else{
        if(x%2!=0)
        {
            if(count_odd>=x)
            {
                cout<<"YES"<<endl;
            }
            else{  //if count_odd is less than x
                int total=0;
                if(count_odd%2 != 0)
                {
                 total=count_odd;
                }
                else{
                    total=count_odd-1;
                }
                
                
                if(count_even>=x-total){
                    cout<<"YES"<<endl;
                }
                else
                    cout<<"NO"<<endl;
        }
            
                  }
        

        else if(x%2==0)
        {
             if(count_even ==0)
             {
                 cout<<"NO"<<endl;
             }
             else{
                 x=x-1;
                 count_even--;
                 if(count_odd>=x)
                 {
                     cout<<"YES"<<endl;
                 }
                 else{
                     int total=0;

                    if(count_odd%2!=0)
                    {
                     total=count_odd;
                    }
                    else{
                     total=count_odd-1;
                    }
                    if(count_even>=(x-total))
                    {
                     cout<<"YES"<<endl;
                    }
                    else
                    
                     cout<<"NO"<<endl;
                    
                }
                 
             }
        }
    }
}
}