                                           /*INITIALIZING A GRAPH*/
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
int adj[n][m];
//take edges as input
for(int i=0;i<m;++i)
{
	int u,v;
	cin>>u>>v;
	adj[u][v]=1;
	adj[v][u]=1;
	
}
return 0;
}
