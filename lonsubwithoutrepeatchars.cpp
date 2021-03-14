#include<bits/stdc++.h>
using namespace std;

//Asked in AMAZON
//Find the length of the longest substring without rany repeating(duplicate) chars.
//O(n) solution  (two pointer sliding window technique)
int main()
{
    string str="abcabcbb";
    int a_pointer=0; 
    int b_pointer=0;
    unordered_set<char> s;

    int length=0;
    for(int i=0;i<str.length();i++)
    {
        if(s.find(str[i])== s.end()){
            s.insert(str[i]);
            b_pointer++;     //expanding window until we find a duplicate
            if(s.size() > length)
                length=s.size();

        }
        else{
            s.erase(str[a_pointer]);
            i++;
        }
    }

    cout<<length;
    
}