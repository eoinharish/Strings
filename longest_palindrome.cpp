#include<bits/stdc++.h>
using namespace std;

// brute force but important ....O(n^3)    isPalindrome->O(n)

bool isPalindrome(string s)
{
    int low=0;
    int high=s.length()-1;
    while(low<high)
    {
        if(s[low]!=s[high])
        {
            return false;
        }
        low++;
        high--;
    }
    return true;
}

int main()
{
    string s="babad";
    int l=0;
    string res;
    for(int i=0;i<s.length();i++)                 //n times
    {
        for(int len=1;len<=s.length()-i;len++)        //n times
        {
            
            string temp=s.substr(i,len);       
            if(isPalindrome(temp) && temp.length()>l)      //O(n)
            {
                l=temp.length();
                res=temp;                                   //Total time complexity O(n^3)


            }
        }
    }
    cout<<res;

    
}

