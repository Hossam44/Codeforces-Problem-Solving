#include <iostream>

using namespace std;

int main()
{
    long long arr[150000],n,m,q=0,w=10000000000,r,b;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=m;i++)
    {
        b=i,q=0;
        if(i<=m-n+1)
        {
            for(int j=1;j<=n;j++)
            {
                q+=arr[b++];
            }
            if(w>q)
            {
                w=q;
                r=i;
            }
         }
    }
    cout<<r;
    return 0;
}
