                                        /*INITIALZING A WEIGHTED GRAPH*/
#include<bits/stdc++.h>
using namespace std;
void fastIO()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
}
int main()
{
int n,m;
cin>>n>>m;
// declare an adjaceny matrix of size n x n
vector<pair<int,int>>adj[n+1];
//take edges and weights as input
for(int i=0;i<m;++i)	
{
	int u,v,w;
	cin>>u>>v>>w;
	adj[u].push_back({v,w});
	adj[v].push_back({u,w});
	
}
return 0;
}
