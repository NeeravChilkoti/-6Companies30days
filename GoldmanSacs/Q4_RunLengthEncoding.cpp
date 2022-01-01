// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{  
  string Str;
  int count=1;
  if(src.size()==1)
  {
      Str.push_back(src[0]);
      Str.push_back('1');
  }
  for(int i =1;i<src.size();i++)
  {
      if(src[i-1]==src[i])
            count++;
      else
      {
              Str.push_back(src[i-1]);
              Str.push_back(char(count+48));
              count=1;
      }
      if(src[i+1]=='\0')
      {
         Str.push_back(src[i]);
         Str.push_back(char(count+48));
      }
  }
  return Str;
}   
