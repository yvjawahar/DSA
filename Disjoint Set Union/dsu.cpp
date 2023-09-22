#include "bits/stdc++.h"
using namespace std;
#define file_read_write freopen("IO files\\inp.txt","r",stdin);freopen("IO files\\out.txt","w",stdout);
class DisjointSetUnion
{
    public:
    vector<int>size,parent;
    DisjointSetUnion(int n)
    {
        size.resize(n+1);
        parent.resize(n+1);
        for(int i=0;i<=n;++i)
        {
            parent[i]=i;
            size[i]=1;
        }
    }
    int findUP(int node)
    {
        if(node==parent[node])
            return node;
        return parent[node]=findUP(parent[node]);
    }
    void unionbySize(int u,int v)
    {
           int ulp_u=findUP(u),ulp_v=findUP(v);
           if(ulp_u==ulp_v) return ;
           if(size[ulp_u]<size[ulp_v]) 
           {
           parent[ulp_u]=ulp_v;
           size[ulp_v]+=size[ulp_u];
           }
           else 
           {
            parent[ulp_v]=ulp_u;
            size[ulp_u]+=size[ulp_v];
           }
    }

};
int main()
{
    #ifndef ONLINE_JUDGE
      file_read_write;
    #endif
    DisjointSetUnion ds(7);
    ds.unionbySize(1,2);
    //cout<<ds.findUP(1);
    ds.unionbySize(2,3);
    ds.unionbySize(4,5);
    ds.unionbySize(6,7);
    ds.unionbySize(5,6);
    int x=ds.findUP(3)==ds.findUP(7)?1:0;
    cout<<x<<endl;
    ds.unionbySize(3,7);
    x=ds.findUP(3)==ds.findUP(7)?1:0;
    cout<<x;

    
}
