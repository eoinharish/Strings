#include<bits/stdc++.h>
using namespace std;
//watch coding ninjas video(print subsequences in java)
//function overloading is used but you can also use some other function name
void printSubsequences(string input,string outputSoFar)
{
    if(input.length()==0)
    {
        cout<<outputSoFar<<endl;
        return;
    }
    //we choose not to include the first character
    printSubsequences(input.substr(1),outputSoFar);                 //s.substr(1) means substring starting from position 1 to the end
    //we choose to include the first character
    printSubsequences(input.substr(1),outputSoFar+input[0]);

}


void printSubsequences(string s)
{
    printSubsequences(s,"");
}
int main()
{
    string s;
    cin>>s;
    printSubsequences(s);

    return 0;
}