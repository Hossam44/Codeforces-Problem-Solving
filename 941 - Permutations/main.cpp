#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll fa[21];
void fact()
{
    fa[0]=fa[1]=1;
    for(int i=2;i<=20;i++)
        fa[i]=fa[i-1]*i;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string st;
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);
    ll t,n,sz,ev;
    fact();
    cin>>t;
    while(t--)
    {
        vector<char>v;
        vector<char>c;
        cin>>st;
        cin>>n;
        sort(st.begin(),st.end());
        sz=st.size();
        n%=fa[sz];
        for(int i=0;i<sz;i++)
        {
            c.push_back(st[i]);
        }
        while(sz>1)
        {
            ev=n/fa[sz-1];
            v.push_back(c[ev]);
            c.erase(c.begin()+ev);
            n-=ev*fa[sz-1];
            sz--;
        }
        v.push_back(c[0]);
        c.erase(c.begin());

        for(int i=0;i<v.size();i++)
            cout<<v[i];
        cout<<endl;
    }
    return 0;
}
