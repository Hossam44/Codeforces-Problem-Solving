#include <iostream>

using namespace std;

int main()
{
    long long n,m,q,w,e,arr[10000],arr1[10000],r,t,s=0,b=0;
    cin>>n>>m>>q>>w>>e;
    for(int i=0;i<e;i++)
    {
        cin>>arr[i]>>arr1[i];
    }

    for(int i=0;i<e;i++)
    {
        if(arr[i]>0)
        {
            r=n-q;
            r/=arr[i];
        }
        else if(arr[i]==0)
        {
            r=1000000000;
        }
        else
        {
            r=q-1;
            r/=(arr[i]*-1);
        }
        if(arr1[i]>0)
        {
            t=m-w;
            t/=arr1[i];
        }
        else if(arr1[i]==0)
        {
            t=1000000000;
        }
        else
        {
            t=w-1;
            t/=(arr1[i]*-1);
        }
        s=min(r,t);
            q+=s*arr[i];
            w+=s*arr1[i];
        if(q<=n && w<=m && q>0 && w>0)
        {
            b+=s;
        }
    }
    cout<<b;
    return 0;
}
