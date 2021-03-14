#include<bits/stdc++.h>
using namespace std;
/*ALGORITHM:
 1. Create a temp string and store concatenation of str1 to
       str1 in temp.
                          temp = str1.str1
    2. If str2 is a substring of temp then str1 and str2 are 
       rotations of each other.

    Example:                 
                     str1 = "ABACD"
                     str2 = "CDABA"

     temp = str1.str1 = "ABACDABACD"
     Since str2 is a substring of temp, str1 and str2 are 
     rotations of each other.  */
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()!= s2.length())         
        cout<<"false";
    else{
        string temp;
        temp=s1+s2;
        if(temp.find(s2) != string::npos)              //find a substring s2 inside string temp
        {
            cout<<"true";
        }
        else{
            cout<<"false";
        }

    }

}