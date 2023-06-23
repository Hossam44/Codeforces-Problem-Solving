#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,m;
    long long arr[100001],q=0,w=0,e=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>w>>e;
    if(w<=e)
        q+=w;
    else
        q+=e;
if(w<e)
    {
    if((w*2)<=e)
        arr[i]=w;
    else
        arr[i]=e-w;
    }
    else
        arr[i]=0;
    }
    sort(arr,arr+n);
    for(int i=0;i<m;i++)
    {
        q+=arr[--n];
    }
    cout<<q;
    return 0;
}
