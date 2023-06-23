#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <vector>
#include<algorithm>
#include <set>
#include <stdlib.h>

using namespace std;
int w,e;
int fx[]={-1,-1,0,1,1,1,0,-1};
int fy[]={0,-1,-1,-1,0,1,1,1};
string sd[]={"U","LU","L","LD","D","RD","R","RU"};
bool valid(int a,int s)
{
    if(a<0 || s<0 ||a>=8 ||s>=8)
        return 0;
    else
        return 1;
}
map<pair<int,int>,pair<pair<int,int>,int>> bfs(pair<int,int>src,int &de)
{
    map<pair<int,int>,int>cost;
    map<pair<int,int>,pair<pair<int,int>,int>>path;
    queue<pair<int,int>>q;
    cost[src]=1;
    path[src].first={-1,-1}; path[src].second=-1;
    q.push(src);
    while(!q.empty())
    {
        pair<int,int>z=q.front();
        q.pop();
        for(int i=0;i<8;i++)
        {
            int dx=z.first+fx[i];
            int dy=z.second+fy[i];
            if(valid(dx,dy) && cost[{dx,dy}]==0)
            {
                q.push({dx,dy});
                path[{dx,dy}]={z,i};
                cost[{dx,dy}]=cost[z]+1;
                if(dx==w && dy==e)
                {
                    de=cost[{dx,dy}]-1;
                    return path;
                }
            }
        }
    }
    return path;
}
int main()
{
    string ar,ar1;
    pair<int,int>src;
    int n,re;
    cin>>ar>>ar1;
    if(ar==ar1)
    {cout<<"0"<<endl; exit(0);}
    src.first=ar[1]-'0';
    src.first=8-src.first;
    src.second=ar[0]-'a';
    w=ar1[1]-'0';
    w=8-w;
    e=ar1[0]-'a';
    map<pair<int,int>,pair<pair<int,int>,int>> dis=bfs(src,re);
    vector<string>fi;
    pair<int ,int> m={w,e};

    fi.push_back(sd[dis[m].second]);
    m=dis[m].first;
    while(dis[m].second!=-1)
    {
        n=dis[m].second;
        fi.push_back(sd[n]);
        m=dis[m].first;
    }
    reverse(fi.begin(),fi.end());
    cout<<re<<endl;
    for(string s1 : fi)
        cout<<s1<<endl;
    return 0;
}
