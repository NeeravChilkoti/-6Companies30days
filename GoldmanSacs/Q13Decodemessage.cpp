// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        string temp;
        for(int i = s.size()-1;i>=0;i--)
        {
            int number
            if(s[i]=='[')
            {
                for(int j=i+1;s[j]!=']';j++)
                {
                   temp=s[i]+temp; 
                }
            }
            
        }
        return temp;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
