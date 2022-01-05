#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        map<int,int>emap;
        int key;
        for(int i =0;i<nums.size();i++)
        {
            key=nums[i]%k;       
            if(emap.find(key)==emap.end())
            {
                emap[key]=1;
            }
            else{
                emap[key]++;
            }
        }
        if(emap[0]%2==1)
        {
            return false;
        }
        for(int key =1;key<=k/2;key++)
        {
            if(emap[key]!=emap[k-key])
            {
                return false;
            }
        }
        return true;
    }
};
// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends
