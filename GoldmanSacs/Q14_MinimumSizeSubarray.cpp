#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sm=0,min=INT_MAX;
        int start=0,end=0;
        while((end<nums.size() || sm>=target)&& start<nums.size())
        {
            if(sm<target)
            {   
                sm=sm+nums[end];
                 end++;
                continue;
            }
            if(sm>=target && end>start)
            {
                    if(min>end-start)
                    {
                        min=end-start;
                    }
                sm=sm-nums[start++];
                
            }
        }
        if(min!=INT_MAX)
            return min;    
        else
            return 0;
    }
};

int main()
{
  int n;cin>>n;
  vector <int> check;
  int j;
  for(int i=0;i<n;i++)
  { cin>>j;
    check.push_back(j);
  }
  int target;cin>>target;
  Solution ob;
  cout<<ob.minSubArrayLen(target,check);
  return 0;
}
