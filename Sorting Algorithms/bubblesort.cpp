#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(auto &i:arr) cin>>i;
    for(int i=0;i<n-1;++i)
    {
        for(int j=i+1;j<n-i;++j)
        {
           if(arr[j]<arr[i])
                 swap(arr[j],arr[i]);
        }
      
    }
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
}