#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1="geeksforgeeks";
    string s2="geeks";

    //The function returns the index of the first occurrence of sub-string in the string,
    // if the sub-string is not found it returns string::npos(string::pos is static member with value as the highest possible for the size_t data structure).
    size_t found= s1.find(s2);
    if(found != string::npos)
    {
        cout<<"First occurence is "<<found<<endl;           //0
    }         

    // Find next occurrence of "geeks". Note here we pass 
    // "geeks" as C style string.
    char arr[]="geeks";
    found = s1.find(arr,found+1);
    if(found != string::npos)
    {
        cout<<"Next occurence is "<<found<<endl;            //8
    }

    return 0;
}



// We can also use it to find occurrence of a character:
 
// int main() 
// { 
//     string str = "geeksforgeeks a computer science"; 
//     char c = 'g'; 
  
//     // Find first occurrence of 'g' 
//     size_t found = str.find(c); 
//     if (found != string::npos) 
//         cout << "First occurrence is " << found << endl;    //0 
  
//     // Find next occurrence of 'g' 
//     found = str.find(c, found+1);                          //8
//     if (found != string::npos) 
//         cout << "Next occurrence is " << found << endl; 
  
//     return 0; 
// } 