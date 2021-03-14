#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="harish";

    // Hash array to keep count of characters. 
    // Initially count of all charters is  
    // initialized to zero.
    int count[26]={0};

    for(int i=0;i<s.length();i++)
    {
        count[s[i]-'a']++;
    }
      
    // Traverse the hash array and print  
    // characters 
    for (int i=0;i<26;i++){
        while(count[i]!=0){
            cout << (char)('a'+i);
            count[i]--;
        }
    }
}