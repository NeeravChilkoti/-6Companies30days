
#include <bits/stdc++.h>
using namespace std;


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long multiply=1;
        int count=0,start=0,end=0;
        for(start=0,end=0;end<n;end++)
        {
            multiply=multiply*a[end];
            while(start<end && multiply>=k)
            {
                multiply=multiply/a[start++];
            }
            if(multiply<k)
            {
                count+=1+end-start;
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends
