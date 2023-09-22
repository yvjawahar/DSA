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
      int j=i;
      while(j>0 and arr[j-1]>arr[j])
      {
        swap(arr[j-1],arr[j]);
        j--;
      }
    }
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
}