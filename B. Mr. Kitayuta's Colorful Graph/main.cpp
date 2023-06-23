#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <vector>
#include<algorithm>
#include <set>
#include <stdlib.h>

using namespace std;
vector<vector<pair<int,int>>>edges(100009);
map<pair<int,int>,int>ed;
//dfs
void dfs(int src,int s,int col,map<pair<int,int>,int>&visited)
{
    for(pair<int,int>p : edges[src])
    {
        if((p.second==col || col==0) && visited[p]==0)
        {
            visited[{src,p.second}]=1;
            visited[{p.first,p.second}]=1;
            ed[{s,p.first}]++;
            dfs(p.first,s,p.second,visited);
        }
    }
}
int main()
{
    int n,m,from,to,co,q;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>from>>to>>co;
        edges[from].push_back({to,co});
        edges[to].push_back({from,co});
    }
    for(int i=1;i<=n;i++)
    {
        map<pair<int,int>,int>visited;
        dfs(i,i,0,visited);
    }
    cin>>co;
    for(int i=0;i<co;i++)
    {
        cin>>from>>to;
        cout<<ed[{from,to}]<<endl;
    }
}
