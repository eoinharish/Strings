#include<bits/stdc++.h>
using namespace std;

void permute(string s, int l,int r)
{
    // Base case
    if(l==r)
    {
        cout<<s<<" ";
    }
    else
    {
         // Permutations made 
        for(int i=l;i<=r;i++)
        {
             // Swapping done
            swap(s[l],s[i]);


            // Recursion called
            permute(s,l+1,r);

             //backtrack 
             swap(s[l],s[i]);


        }
    }
    
}

int main()
{
    string s="CBA";

   // sort(s.begin(),s.end());  if you want permutations in lexographically sorted order
    permute(s,0,s.length()-1);

}