// Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Note that an empty string is also considered valid.   
#include<bits/stdc++.h>
using namespace std;

    bool isValid(string s) {
        
        if(s.length()%2!=0)          //if length is odd return false
            return false;
        stack <char> st;
        
        for(char c:s)
        {
            if(c=='(' || c=='{' || c=='['){
                st.push(c);
            }
            else if(c==')' && !st.empty() && st.top()=='('){
                st.pop();                
            }
             else if(c=='}' && !st.empty() && st.top()=='{'){
                st.pop();                
            }
             else if(c==']' && !st.empty() && st.top()=='['){
                st.pop();                
            }
            else{
                return false;
            }
            
        }
        return st.empty();
   }
   int main()
   {
       string s="({}";
       bool ans;
       ans=isValid(s);
       cout<<ans;
   }