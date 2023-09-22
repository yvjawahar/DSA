                                 /*BELLMANFORD ALGORITHM WORKS FOR EEN NEGATIVE CYCLES*/
#include "bits/stdc++.h"
using namespace std;
#define file_read_write freopen("IO files\\inp.txt","r",stdin);freopen("IO files\\out.txt","w",stdout);
vector<int> bellmanford(int S,vector<vector<int>>&adj,int V)
{
 vector<int>dist(V,1e9);
dist[S]=0;
// computing the distance matrix till vertex-1
for(int i=0;i<V-1;++i) 
{
    for(auto &it:adj)
    {
            int u=it[0],v=it[1],wt=it[2];
            if(dist[u]!=1e9 and dist[u]+wt<dist[v])
            dist[v]=dist[u]+wt;
    }

}
//detect negative cycles 
for(auto &it:adj)
{
    int u=it[0],v=it[1],wt=it[2];
    if(dist[v]!=1e9 and dist[u]+wt<dist[v])
    dist[v]=dist[u]+wt;
}
return dist;
}
int main()
{
    #ifndef ONLINE_JUDGE
      file_read_write;
    #endif
    int v;
    cin>>v;
    int S=0;
    vector<vector<int>>adj;
    for(int i=0;i<1;++i)
    {
        int uu,vv,wt;
        cin>>uu>>vv>>wt;
       vector<int>temp={uu,vv,wt};
       adj.push_back(temp);
    }
    vector<int>distance=bellmanford(S,adj,v);
    for(auto &i:distance)
    cout<<i<<" ";
}