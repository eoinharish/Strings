#include<bits/stdc++.h>
using namespace std;

// Given a string s and a non-empty string p, find all the start indices of p's anagrams in s.

// Strings consists of lowercase English letters only and the length of both strings s and p will not be larger than 20,100.
// Input:
// s: "cbaebabacd" p: "abc"

// Output:
// [0, 6]

vector<int> findAnagrams(string s, string p) {

    vector<int> v;
    if(s.length()==0 || s.length()<p.length())
        return v;
    int p_count[26]={0};
    int window[26]={0};
    for(char c:p)
    {
        p_count[c-'a']++;
    }
    for(int i=0;i<p.length();i++)
    {
        window[s[i]-'a']++;
    }
    bool isAnagram=true;
    for(int i=0;i<26;i++)
    {
        if(p_count[i]!=window[i]){
            isAnagram=false;
            break;
        }
    }
    if(isAnagram) v.push_back(0);

    for(int i=p.length();i<s.length();i++)
    {
        window[s[i]-'a']++;  //new char
        window[s[i-p.length()]-'a']--; //dleted char
        isAnagram=true;
        for(int i=0;i<26;i++)
        {
            if(p_count[i]!=window[i]){
                isAnagram=false;
                break;
            }
        }
        if(isAnagram) v.push_back(i-p.length()+1);
    }
    
    return v;
}
int main()
{
    string s="abcdebacb";
    string p="cab";
    vector<int>v=findAnagrams(s,p);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    
}