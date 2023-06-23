#include <bits/stdc++.h>

using namespace std;
#define ll long long
int t,n,m,x,le,re,cnt;

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cnt = 0;
        bool b = 0;
        vector<pair<int,int>>v;
        cin>>n>>x>>m;
        for(int j=0;j<m;j++)
        {
            cin>>le>>re;
            v.push_back({le,re});
        }
        for(int j=0;j<v.size();j++)
        {
            if(x>=v[j].first && x<=v[j].second)
            {
                cnt = j;
                b = 1;
                break;
            }
        }
        re = v[cnt].second;
        le = v[cnt].first;
        for(int j=cnt+1;j<v.size();j++)
        {
            if((v[j].first<=le && v[j].second>=le) ||(v[j].first<=re && v[j].second>=re))
            {
                re = max(re,v[j].second);
                le = min(le,v[j].first);
            }
        }
        (b)? cout<<re-le+1<<endl : cout<<"1"<<endl;

    }
    return 0;
}
