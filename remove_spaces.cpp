#include<bits/stdc++.h>
using namespace std;
//O(n) solution. traversing string only once
int main()
{
    //initially length =15
    string s="geeks for geeks";   //if char s[]="geeks for geeks" is used then we dont need to resize the string


    int count=0; // To keep track of non-space character count 


    /*Iterate through all characters of given string, If current character is non-space, then put this character
        at index 'count' and increment 'count'*/
    for(int i=0;s[i];i++)
    {
        if(s[i]!=' ')
        {
            s[count++]=s[i];

        }

    }
    s[count]='\0';          //s[13]='\0'
    s.resize(count);      //not required if using char s[]
    
    cout<<s<<" "<<s.length();

}