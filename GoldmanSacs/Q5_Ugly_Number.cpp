// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool isugly(int i)
    {
    while(true)
    {
        if(i%2==0)
        {
        i=i/2;
          continue;
        }
        else if(i%3==0)
        {
        i=i/3;
        continue;
        }
        else if(i%5==0)
        {
         i=i/5;
         continue;
        }
     else{
        if(i!=1)
          return false;
        else
          return true;
        }
    }
}
	ull getNthUglyNo(int n) {
	int i =0;
    while(n>0)
    {
        i++;
        if(isugly(i))
        {
        n--;
        }
    }
    return i;
	    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
