// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int value[2];
    int *findTwoElement(int *arr, int n) {
        int array[n+1]={0};
        for(int i =0;i<n;i++)
        {
            array[arr[i]]++;
        }
        for(int j=1;j<=n;j++)
        {
            if (array[j]==2)
                value[0]=j;
            else if(array[j]==0)
                value[1]=j;
        }
        return value;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
