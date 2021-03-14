#include<bits/stdc++.h>
using namespace std;

// //using sets(self balancing BST) we can remove duplicates and obtain a sorted order
// // O(nlogn)
// int main()
// {
//     string str="geeksforgeeks";

//     set<char>s ;
//     for(char c:str)
//     {
//         s.insert(c);
//     }

//     for(char c:s)
//     {
//         cout<<c;
//     }

// }
 
// 0(n) solution
int main()
{
    string s="geeksforgeeks";   // if char s[]="geeksforgeeks" then use s[index]='\0' at the last
    int index=0;
    int count=0;
    unordered_map<char,int> m;
    for(int i=0;s[i];i++)
    {
        if(m[s[i]]==0)
        {
            s[index]=s[i];         //modifying the same string
            index++;
            m[s[i]]++;
        }
        else
        count++;            // to keep track of no of total repeated characters ,here eeeksg
    }
                                            
    s.resize(s.length()-count);       // s.length()-count gives new length    //  s[index]='\0'; if char s[]       
    cout<<s;
    
}