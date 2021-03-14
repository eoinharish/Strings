#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="geeks for geeks";
   
    /*s.erase();    delete all characters
    cout<<s.length();  len becomes zero*/

    // Deletes character at index 4 
    // s.erase(s.begin() + 4);

    //s.erase(s.begin(),s.begin()+6);      second parameter is exclusive
    //cout<<s;   for geeks

    //s.erase(1);    delete all character except 1st character
    //cout<<s;      g

    /*string s2="hello world!";
    s2.erase(s2.begin(),s2.end()-6);
    cout<<s2;*/                      //world!


    //s.erase(remove(s.begin(),s.end(),'g'),s.end());     //eeks for eeks
    s.erase(remove(s.begin(),s.end(),' '),s.end());   
    cout<<s<<endl;


    
}