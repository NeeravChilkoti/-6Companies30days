//Is this approach right?
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int k;
    vector<int> value;
    for(int i =0;i<n;i++)
    {
        cin>>k;
        value.push_back(k);
    }
    int max[10]={0};
    for(int i =0;i<value.size();i++)
    {
        if(max[0]<value[i])
        {
            max[0]=value[i];
            sort(max,max+10);
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<max[i]<<" ";
    }
    return 0;
}
