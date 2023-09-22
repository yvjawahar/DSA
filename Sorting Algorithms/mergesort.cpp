#include "bits/stdc++.h"
using namespace std;
void merge(int low,int mid,int high,vector<int>&arr)
{
   vector<int>temp;
   int i=low,j=mid+1,n=mid,m=high;
   while(i<=n and j<=m)
    {
        if(arr[i]>arr[j])
        {
            temp.push_back(arr[j]); j++;
        }
        else
         {
             temp.push_back(arr[i]);i++;
         }
    }
    while(i<=n)
    {
                  temp.push_back(arr[i]); i++;
    }
    while(j<=m)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for(int i=low;i<=high;++i)
    {
        arr[i]=temp[i-low];
    }
}
void mergesort(int low,int high,vector<int>&arr)
{
    if(low>=high) return;
    
        int mid=(low+high)/2;
        mergesort(low,mid,arr);
        mergesort(mid+1,high,arr);
        merge(low,mid,high,arr);
        return;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(auto &i:arr) cin>>i;
    mergesort(0,n-1,arr);
     for(auto &i:arr) cout<<i;
}