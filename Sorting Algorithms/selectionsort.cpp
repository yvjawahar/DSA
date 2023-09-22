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
        int mn=i; 
        for(int j=i+1;j<n;++j)
        {
            mn=arr[i]>arr[j]?j:mn;
        }
        swap(arr[i],arr[mn]);
    }
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
}