#include<bits/stdc++.h>
using namespace std;
//O(nlogn)
//sort both the string and check if they are equal or not,if equal then they are anagram of each other
// int main()
// {
//     string s1="ababc";
//     string s2="cbbad";
//     sort(s1.begin(),s1.end());
//     sort(s2.begin(),s2.end());

//     if(s1==s2)                          //other method to compare strings -> int x= s1.compare(s2);   if(x==1)cout<<"anagrams"
//         cout<<"anagrams";
//     else 
//         cout<<"not anagrams";}


int main()
{
    string s1="ababc";
    string s2="cbbaa";
    int flag=1;
    int a[256]={0};
    //int b[256]={0};

    for(char c:s1)
    {
        int index=(int)c;
        a[index]++;
    }
    // for(char c:s2)
    // {
    //     int index=(int)c;
    //     a[index]++;
    // }
    for(char c:s2)
    {
        int index=(int)c;
        a[index]--;
    }
    // for(int i=0;i<256;i++)
    // {
    //     if(a[i]!=b[i]){
    //         flag=0;
    //         break;
    //     }
    // }
    for(int i=0;i<256;i++)
    {
        if(a[i]!=0){
            flag=0;
            break;
        }
    }
    if(flag==1)
        cout<<"yes";
    else
    {
            cout<<"No";
    }
    

}