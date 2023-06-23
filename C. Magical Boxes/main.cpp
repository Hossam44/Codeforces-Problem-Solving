#include <bits/stdc++.h>

using namespace std;
vector<pair<long long ,long long>>v(100005);
bool check(long long x,long long z)
{
    long long r=1;
    while(x)
    {
        r*=4;
        if(r>=z)
            return 1;
        x--;
    }
    return 0;
}

bool valid(long long k)
{
    long long r;
    for(int i=v.size()-1;i>=0;i--)
    {
        r=k-v[i].first;
        if(r<=0)
            return 0;
        if(!check(r,v[i].second))
            return 0;
    }
    return 1;
}
int binary()
{
    long long st=0,en=1e9+30,mid;
    while(st<en)
    {
        mid=st+(en-st)/2;
        if(valid(mid))
            en=mid;
        else
            st=mid+1;
    }
    return st;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    //sort(v.begin(),v.end());
    cout<<binary()<<endl;
    return 0;
}
