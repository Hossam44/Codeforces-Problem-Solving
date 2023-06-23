#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <vector>
#include<algorithm>
#include <set>
#include <stdlib.h>

using namespace std;
int n,m;
vector<vector<int>>edges(200009);
vector<int>visited1(200009,-1);
vector<int>visited2(200009,0);
vector<int>visited3(200009,-1);

void bfs_benefit()
{
    visited1[1]=0;
    queue<int>q;
    q.push(1);
    while(!q.empty())
    {
        int w=q.front();
        q.pop();
        for(int i :edges[w])
        {
            if(visited1[i]==-1)
            {
                q.push(i);
                visited1[i]=visited1[w]+1;
            }
        }
    }
}
int dfs(int k)
{
    visited3[k]=1;
    int c=0;
    for(int i :edges[k])
    {
        c++;
        if(visited3[i]==-1)
        {
            visited3[i]==1;
            visited2[k]+=(dfs(i)-1);
        }
    }
    if(c==0)
        return 0;
    return visited2[k];
}
int main()
{
    int u,v;
    cin>>n>>m;
    for(int i=0;i<n-1;i++)
    {
        cin>>u>>v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    bfs_benefit();
    dfs(1);
    vector<int>p;
    for(int i=1;i<=n;i++)
    {
        long long total=visited1[i]+visited2[i];
        p.push_back(total);
    }
    sort(p.begin(),p.end());
    reverse(p.begin(),p.end());
    int long long z=0;
    for(int i=0;i<m;i++)
    {
        z+=p[i];
    }
    cout<<z;
    return 0;
}
