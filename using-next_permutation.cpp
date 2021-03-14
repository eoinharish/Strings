#include<bits/stdc++.h>
using namespace std;

// Function to print permutations of string s 
// using next_permutation
void permute(string s)
{
    sort(s.begin(),s.end());

    do{
        cout<<s<<" ";

    }while(next_permutation(s.begin(),s.end()));

}

int main()
{
    string s="CBA";

    permute(s);

}