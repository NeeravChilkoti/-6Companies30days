// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        stack <char> st;
        string str="";
        string str2="";
        string num="";
        int n=0;
        for(int i =0;i<s.size();i++)
        {
            if(s[i]==']')
            
            {
                while(st.top()!='[')
                {
                    str=st.top()+str;
                    st.pop();
                }
                st.pop();
                while(isdigit(st.top()))
                {
                    num=st.top()+num;
                    st.pop();
                    if(st.empty())
                    {
                        break;
                    }
                }
                int n=stoi(num);
                for(int i =0;i<n;i++)
                {
                    str2=str2+str;
                }
                if(st.empty())
                {
                    return str2;
                }
                for(int i=0;str2[i]!='\0';i++)
                {
                    st.push(str2[i]);
                }
                str="";
                str2="";
                num="";
            }
            else{
                st.push(s[i]);
            }
        }
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
