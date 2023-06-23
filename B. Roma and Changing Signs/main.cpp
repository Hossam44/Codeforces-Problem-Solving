#include <iostream>

using namespace std;

int main()
{
    int arr[100000],n,m,q=0,w=0,e=0;
    long long k=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>=1 && q==0)
        {
            w=i;
            q++;
        }
    }
    q=w;
    if(w==0)
    {
        if(m%2!=0)
            arr[0]*=-1;
    }
    else
    {
        for(int i=0;i<m;i++)
        {
            if(i<w)
                arr[i]*=-1;
            else
            {
                e=m-i;
                if(e%2!=0)
                    {
                    if(arr[w]>arr[w-1])
                        arr[w]-=arr[w-1];
                    else
                        arr[w-1]-=arr[w];
                    }
                    break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        k+=arr[i];
    }
    cout<<k;
    return 0;
}
