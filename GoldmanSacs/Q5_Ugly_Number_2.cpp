// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	   ull ugly_list[n];
    ugly_list[0]=1;
    int i2=0,i3=0,i5=0;
    for(int i=1;i<n;i++)
    {
      ugly_list[i]=min({ugly_list[i2]*2,ugly_list[i3]*3,ugly_list[i5]*5});
      if(ugly_list[i]==ugly_list[i2]*2)
      {
          i2++;
      }
      if(ugly_list[i]==ugly_list[i3]*3)
      {
          i3++;
      }
      if(ugly_list[i]==ugly_list[i5]*5)
      {
          i5++;
      }
  }
   return ugly_list[n-1];
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
