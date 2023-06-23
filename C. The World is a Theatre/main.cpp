#include <iostream>

using namespace std;
int long long co(int long long x,int long long z)
{
    long double q=1,w=1,s=x;
    if(z<(x/2)){
    for(int i=1;i<=z;i++)
    {
        q*=s;
        s--;
    }
    for(int i=z;i>1;i--)
    {
        w*=i;
    }
}
    else{
    for(int i=1;i<=x-z;i++)
    {
        q*=s;
        s--;
    }
    for(int i=x-z;i>1;i--)
    {
        w*=i;
    }
}
    q=q/w;
    return q;
}
int main()
{
    int long long n,m,k,count0=0;
    cin>>n>>m>>k;
    for(int i=4;i<=n;i++)
    {        if(k-i>=1 && m+i>=k)
        {
            count0+=(co(n,i)*co(m,k-i));
        }
    }
    cout<<count0;
    return 0;
}
