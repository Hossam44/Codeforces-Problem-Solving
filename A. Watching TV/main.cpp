#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,n,a,q=0,w;
    string s;
    unordered_map<int,int>m;
    cin>>t;
    while(t--)
    {
        q=0;
        w=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>s>>a;
            m[a]++;
        }
        for(auto p:m)
        {
            if(p.second>q)
            {
                q=p.second;
                w=p.first;
            }
            else if (p.second==q && p.first < w)
                w=p.first;
        }
        cout<<w<<endl;
        m.clear();
    }
    return 0;
}
