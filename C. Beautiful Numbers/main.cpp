#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll Max=1000000007;
ll a,b,n;
vector<ll>v(1e6+5);
bool good(ll s)
{
    ll sum=s*a+(n-s)*b;
    while(sum)
    {
        ll p=sum%10;
        sum/=10;
        if(p!=a && p!=b)
            return 0;
    }
    return 1;
}
void calculate()
{
    v[0]=1;
    for(int i=1;i<=n;i++)
    {
        v[i]=(i*v[i-1])%Max;
    }
}
ll power_insverse(ll base,ll m)
{
    ll sum=1;
    while(m)
    {
        if(m&1) sum=(sum%Max*base%Max)%Max;
        base=(base%Max*base%Max)%Max;
        m >>=1;
    }
    return sum;
}
long long solve()
{
    ll sum=0;
    for(ll i=0;i<=n;i++)
    {
        if(good(i))
        {
            sum=(sum+(v[n]*power_insverse((v[i]*v[n-i])%Max,Max-2))%Max)%Max;
        }
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin>>a>>b>>n;
    calculate();
    cout<<solve();
    return 0;
}
