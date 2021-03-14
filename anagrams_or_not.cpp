#include <bits/stdc++.h>
using namespace std;


//Brute force solution    O(n^2)
int main() {

	    string s1,s2;
	    getline(cin,s1);
	    getline(cin,s2);
	    int flag;
        bool visited[s2.length()]={false};
	    if(s1.length()!=s2.length())
	        flag=0;
	   
	    else{
	        for(int i=0;i<s1.length();i++)
	        {
	            char ch=s1[i];
	            flag=0;
	            for(int j=0;j<s2.length();j++)
	            {
	                if(s2[j]==ch && !visited[j]){         
                        visited[j]=true;         //mark index of char of s2 string as true if visited first time 
	                    flag=1;
	                    break;
	                }
	            }
	            if(flag==0)
	                break;
	       }
	    }
	    if(flag==0)
	        cout<<"NO"<<endl;
	   else
	    cout<<"YES"<<endl;
	 }
//aad
//acd
//output NO 	        
	    
