
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<ll>v;
    ll q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>q;
        v.push_back(q);
    }
    sort(v.begin(),v.end());
    q=(v[n-1]-v[0])+1;
    if(v[0]+v[1]>q)
    {
        cout<<"YES"<<endl;
        cout<<q<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

