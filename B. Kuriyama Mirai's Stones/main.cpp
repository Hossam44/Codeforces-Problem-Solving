#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long arr[100001],arr1[100001],n,m,q,w,e,arr2[100001],k=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        arr1[i]=arr[i];
        arr[i]+=arr[i-1];
    }
    sort(arr1,arr1+n+1);
    for(int i=1;i<=n;i++)
    {
        arr1[i]+=arr1[i-1];
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>q>>w>>e;
        if(q==1)
        {
            arr2[k++]=arr[e]-arr[w-1];
        }
        else
        {
            arr2[k++]=arr1[e]-arr1[w-1];
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<arr2[i]<<endl;
    }
    return 0;
}
