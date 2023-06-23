#include <bits/stdc++.h>

using namespace std;
const long double b=3.141592653589793238463;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    long double d,x,w,a,s,q;
    cin>>t;
    while(t--)
    {
        cin>>a>>s;
        w=s/2;
        q=w/(180.0/b);
        x=sin(q)*a;
        d=cos(q)*a;
        x=x*d;

        w=(s/360)*(b*a*a);
        w-=x;
        cout<<fixed<<setprecision(6)<<w<<endl;
    }
    return 0;
}
/*
int arr[10000007];
void prim()
{
    arr[0]=arr[1]=1;
    for(int i=2;i<=1e7/i;i+=1 + (i&1))
    {
        if(arr[i]==0)
        {
            for(int j=i*i;j<=1e7;j+=i)
            {
                arr[j]=1;
            }
        }
    }
}
*/
