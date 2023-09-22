                                  /*DJIKSTRA'S ALGORITHM DOESN'T WORK FOR NEGATIVE CYCLES*/
#include "bits/stdc++.h"
using namespace std;
#define file_read_write freopen("IO files\\inp.txt","r",stdin);freopen("IO files\\out.txt","w",stdout);
int main()
{
    #ifndef ONLINE_JUDadjE
      file_read_write;
    #endif
int u=5,v=6;
int S=1;
vector<pair<int,int>>adj[u+1];
adj[1].push_back({2,2});adj[1].push_back({4,1});adj[2].push_back({1,2});
adj[2].push_back({5,5});adj[2].push_back({3,4});adj[3].push_back({2,4});
adj[3].push_back({4,3});adj[3].push_back({5,1});adj[4].push_back({1,1});
adj[4].push_back({3,3});adj[5].push_back({2,5});adj[5].push_back({3,1});
vector<int>dist(u+1,1e9);
dist[S]=0;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
pq.push({0,S});

while(!pq.empty())
{
    int d=pq.top().first;
    int vv=pq.top().second;
    pq.pop();
    vector<pair<int,int> >::iterator it;
for(it=adj[vv].begin();it!=adj[vv].end();it++)
    {
        int nxt=it->first;
        int dnxt=it->second;
        if(dist[nxt]>dist[vv]+dnxt)
        {
                dist[nxt]=dist[vv]+dnxt;;
                pq.push({dist[nxt],nxt});
        }
    }
}
for(int i=1;i<size(dist);++i)
cout<<dist[i]<<" ";
  

}