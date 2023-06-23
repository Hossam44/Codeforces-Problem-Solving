#include <bits/stdc++.h>

using namespace std;
const int oo=0x3f3f3f3f;
int dist[1005],n,m;
struct edges{
int from,to,cost;
};
bool bellman(vector<edges>& v)
{
    dist[n]=0;
    for(int i=0;i<=n;i++)
    {
        bool k=0;
        for(int j=0;j<m+n;j++)
        {
            if(dist[v[j].to] > dist[v[j].from]+v[j].cost)
            {
                dist[v[j].to] = dist[v[j].from]+v[j].cost;
                k=1;
                if(i==n)
                    return 1;       // negative cycle
            }
        }
        if(!k)
            break;
    }
    return 0;
}

int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        memset(dist,oo,sizeof dist);
        cin>>n>>m;
        vector<edges>v(m+n+5);
        for(int i=0;i<m;i++)
        {
            cin>>a>>b>>c;
            v[i]={a,b,c};
        }
        for(int i=0;i<n;i++)
        {
            v[m+i]={n,i,0};
        }
        if(bellman(v))
            cout<<"possible"<<endl;
        else
            cout<<"not possible"<<endl;
    }
    return 0;
}
