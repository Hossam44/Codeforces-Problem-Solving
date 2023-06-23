#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <vector>
#include<algorithm>
#include <set>
#include <stdlib.h>

using namespace std;
vector<vector<int>>edges(100009);
vector<int>visited(4009,-1);
int total=10000000;
int arr[4005]={0};
map<int,int>per;

//dfs
void dfs(int src,int s,int co)
{
    for(int p : edges[src])
    {
        if(co<2)
        {
            if(visited[p]==-1)
            {
                per[p]=src;
                dfs(p,s,co+1);
            }
        }
        else
        {
            if(p==s)
            {
                int k=arr[s]+arr[src]+arr[per[src]]-6;
                if(k<total)
                    total=k;
            }
        }
    }
}
int main()
{
    int n,m,from,to,co,q;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>from>>to;
        edges[from].push_back(to);
        edges[to].push_back(from);
        arr[from]++;
        arr[to]++;
    }
    for(int i=1;i<=n;i++)
    {
        dfs(i,i,0);
        visited[i]=1;
    }
    if(total==10000000)
        cout<<"-1"<<endl;
    else
        cout<<total<<endl;
}
