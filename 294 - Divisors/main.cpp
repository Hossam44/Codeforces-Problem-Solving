#include <iostream>

using namespace std;
typedef long long ll;
int divise(ll n)
{
    int i,sum=0;
    for(i=1;i<n/i;i+=1)
    {
        if(n%i==0)
            sum+=2;
    }
    if(i*i==n)
        sum++;
    return sum;
}
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output1.txt","wt",stdout);
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t,f,s=0,c;
    ll n,m;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        s=0;
        cin>>n>>m;
        for(ll j=n;j<=m;j++)
        {
            f=divise(j);
            if(f>s)
            {
                s=f;
                c=j;
            }
        }
        cout<<"Between "<<n<<" and "<<m<<", "<<c<<" has a maximum of "<<s<<" divisors."<<endl;
    }

    return 0;
}
