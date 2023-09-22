#include "bits/stdc++.h"
using namespace std;
int partition(vector<int>&arr,int low,int high)
{
    int pivot_value=arr[low],i=low,j=high;
    while(i<j)
    {
        while(arr[i]<=pivot_value and i<=high-1) i++;
        while(arr[j]>pivot_value and j>=low+1)   j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(vector<int>&arr,int low,int high)
{ 
    if(low>high) return;
    int pivot_index=partition(arr,low,high);
    quicksort(arr,low,pivot_index-1);
    quicksort(arr,pivot_index+1,high);
    return;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(auto &i:arr) cin>>i;
    quicksort(arr,0,n-1);
    for(auto &i:arr) cout<<i<<" ";
}