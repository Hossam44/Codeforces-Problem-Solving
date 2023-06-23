#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    ll n,m,s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(n<=6)
            {cout<<"15"<<endl; continue;}
        s=20;
        if(n&1) n++;
        n-=8;
        m=n/2;
        s+=m*5;
        cout<<s<<endl;
    }
    return 0;
}
