#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int Max=1e6+5;
int arr[Max];
int count0=0;
void sieve()
{
    iota(arr,arr+Max,0);
    arr[0]=arr[1]=-1;
    for(int i=2;i<=Max/i;i+=1 + (i&1))
    {
        if(arr[i]==i)
        {
            for(int j=i*i;j<=Max;j+=i)
                if(arr[j]==j)
                    arr[j]=i;
        }
    }
}
vector<int>v;
void factor(ll x)
{
    while(x!=1)
    {
        v.push_back(arr[x]);
        x/=arr[x];
    }
}

int main()
{
    sieve();
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);
    ll n=1;
    for(int i=1;i<=14;i++)
    {
        n*=i;
    }
    cout<<n<<endl;
    while(cin>>n && n!=0)
    {
        cout<<n<<" = ";
        if(n<0)
        {
            n*=-1;
            cout<<"-1 x ";
        }
        factor(n);
        for(ll i=0;i<v.size()-1;i++)
        {
            cout<<v[i]<<" x ";
        }
        cout<<v[v.size()-1]<<endl;
        v.clear();
    }
    return 0;
}
