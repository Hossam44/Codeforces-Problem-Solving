#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <vector>
#include<algorithm>
#include <set>

using namespace std;
pair<int,int>src;
pair<int,int>en;
char arr[22][22];
int ax[]={-1,0,1,0};
int ay[]={0,-1,0,1};
int n,m;
bool valid(int x,int y)
{
    if( x<0 || y<0 || x>=n || y>=m || arr[x][y]=='#')
        return 0;
        return 1;
}
bool bfs(pair<int,int>src, pair<int,int>en)
{
    map<pair<int,int>,int> visited;
    queue<pair<int,int>>e;
    int x=src.first;  int y=src.second;
    visited[{x,y}]=1;
    e.push(src);
    while(!e.empty())
    {
        pair<int,int>q=e.front();
        e.pop();
        x=q.first;  y=q.second;

        for(int i=0;i<4;i++)
        {
            int dx=ax[i]+x;
            int dy=ay[i]+y;
            if(valid(dx,dy) && visited[{dx,dy}]==0)
            {
                if(dx==en.first && dy==en.second)
                    return 1;
                visited[{dx,dy}]==1;
                e.push({dx,dy});
            }
        }
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int d=0;
        cin>>n>>m;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                cin>>arr[j][k];
                if((k==0 ||j==0||j==n-1||k==m-1) && arr[j][k]=='.')
                {
                    if(d==0)
                    {
                        src.first=j;
                        src.second=k;
                    }
                    else if(d==1)
                    {
                        en.first=j;
                        en.second=k;
                    }
                    d++;
                }
            }
        }
        if(d>2 || d==1)
            cout<<"invalid"<<endl;
        else
        {
            if(bfs(src,en))
                cout<<"valid"<<endl;
            else
                cout<<"invalid"<<endl;
        }

    }
    return 0;
}
