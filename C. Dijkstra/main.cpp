#include <iostream>
#include <map>
#include <set>
#include <vector>
#include<algorithm>

using namespace std;

vector<int> dijkstra(vector<vector<pair<int,int>>>edges,int d)
{
    int src=1;
    int des=d;
    vector<int>path(100005,-1);
    vector<int>cost(100005,-1);

    set<pair<int,pair<int,int>>>ord;
    ord.insert({0,{src,src}});

    while(!ord.empty())
    {
        pair<int,pair<int,int>>m=*ord.begin();
        ord.erase(m);
        if(cost[m.second.first]!=-1) {continue;}

        cost[m.second.first]=m.first;
        path[m.second.first]=m.second.second;

        for(pair<int,int>q : edges[m.second.first])
        {
            if(cost[q.first]==-1)
            {
                ord.insert({(m.first+q.second),{q.first,m.second.first}});
            }
        }
    }
    return path;
}
int main()
{
    int n,m,from,to,we;
    cin>>n>>m;
    vector<vector<pair<int,int>>>edges(100005);
    vector<int>path;
    vector<int>result;

    for(int i=0;i<m;i++)
    {
        cin>>from>>to>>we;
        edges[from].push_back({to,we});
        edges[to].push_back({from,we});
    }
    path=dijkstra(edges,n);

    if(path[n]==-1)
        cout<<"-1";
    else
    {
        we=n;
        result.push_back(we);
        while(we!=1)
        {
            we=path[we];
            result.push_back(we);
        }
        reverse(result.begin(),result.end());
        for(int i :result)
            cout<<i<<" ";
    }
    return 0;
}
