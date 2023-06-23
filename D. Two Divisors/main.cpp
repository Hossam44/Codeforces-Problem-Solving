#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pa pair<int,int>

int t,n,m;
const int Max = 1e7+5;
int v[Max];
void factor()
{
    iota(v,v+Max,0);
    v[0]=v[1]=-1;
    for(int i=2;i<Max/i;i+=1+(i&1))
    {
        if(v[i]==i)
            for(int j=i*i;j<Max;j+=i)
                if(v[j]==j)
                    v[j]=i;
    }
}
pa solve(int w)
{
    vector<int>sul;
    int x,ans;
    while(v[w]!=-1)
    {
        ans = 1;
        x = v[w];
        while(v[w]==x)
        {
            w/=x;
            ans*=x;
        }
        sul.push_back(ans);
    }
    return {sul.size()>1,sul[0]};
}
int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<int>v1,v2;

    factor();
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        pa p=solve(m);
        if(p.first)
        {
            v1.push_back(p.second);
            v2.push_back(m/p.second);
        }
        else
        {
            v1.push_back(-1);
            v2.push_back(-1);
        }
    }
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl;
    for(int i=0;i<v1.size();i++)
        cout<<v2[i]<<" ";
    return 0;
}
