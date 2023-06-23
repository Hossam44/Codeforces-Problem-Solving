#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int Max=1e7+5;
int arr[Max];
void sieve()
{
    arr[0]=arr[1]=1;
    for(int i=2;i<=Max/i;i+=1 + (i&1))
    {
        if(arr[i]==0)
        {
            for(int j=i*i;j<=Max;j+=i)
                arr[j]=1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    ll n,q;
    sieve();
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        q=sqrt(n);
        if(q*q==n)
        {
            (!arr[q])? cout<<"YES"<<endl :cout<<"NO"<<endl;
        }

        else
            cout<<"NO"<<endl;
    }
    return 0;
}
