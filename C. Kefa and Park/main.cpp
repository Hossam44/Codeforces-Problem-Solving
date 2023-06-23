#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <vector>
#include<algorithm>
#include <set>
#include <stdlib.h>

using namespace std;
vector<int>arr(100005);
vector<vector<int>>edges(100005);
vector<bool>visited(100005,0);
vector<int>p(100005,-1);

int n,m;
//dfs
void dfs(int src,int &res)
{
    visited[src]=1;
    if(arr[src]==0)
        p[src]=0;
    if(p[src]<=m)
    {
        int w=0;
        for(int y : edges[src])
        {
            if(!visited[y])
            {
                w++;
                p[y]=arr[y]+p[src];
                dfs(y,res);
            }
        }
        if(w==0)
            {res++;}
    }
}
int main()
{
    int to,from,k=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n-1;i++)
    {
        cin>>from>>to;
        edges[from].push_back(to);
        edges[to].push_back(from);
    }
    p[1]=arr[1];
    dfs(1,k);
    cout<<k<<endl;
    return 0;
}
