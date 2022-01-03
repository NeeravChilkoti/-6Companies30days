// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string s){
        stack<int> st;
        string sm;
        int max=0;
        st.push(1);  
       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='I')
           {
               while(!st.empty())
               {
                   if(st.top()>max)
                   {
                       max = st.top();
                   }
                   sm.push_back(st.top()+48);
                   st.pop();
               }
               st.push(max+1);
           }
           if(s[i]=='D')
           {
               st.push(st.top()+1);
               max=st.top();
           }
       }
       while(!st.empty())
       {
           sm.push_back(st.top()+48);
           st.pop();
       }
       return sm;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends
