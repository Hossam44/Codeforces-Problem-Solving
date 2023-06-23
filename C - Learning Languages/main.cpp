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
vector<vector<int>>edges(200);
vector<vector<int>>edges1(200);
vector<vector<int>>edges2(200);

map<int,int>visited1;

void b(int z)
{
    for(int i :edges[z])
    {
        for(int j:edges1[i])
        {
            edges2[j].push_back(z);
            edges2[z].push_back(j);
        }
    }
}
void bfs(int x)
{
    visited1[x]=1;
    queue<int>q;
    q.push(x);
    while(!q.empty())
    {
        int s=q.front(); q.pop();
        for(int i:edges2[s])
        {
            if(visited1[i]==0)
            {q.push(i); visited1[i]=1;}
        }
    }
}
int main()
{
    int t,w,q=0,e=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t==0)
            e++;
        for(int j=0;j<t;j++)
        {
            cin>>w;
            edges[i].push_back(w);
            edges1[w].push_back(i);
        }
    }
    if(e==n)
    {cout<<e; exit(0);}
    for(int i=0;i<n;i++)
    {
        b(i);
    }
    for(int i=0;i<n;i++)
    {
        if(visited1[i]==0)
            {bfs(i); q++;}
    }
    cout<<q-1;
    return 0;
}
