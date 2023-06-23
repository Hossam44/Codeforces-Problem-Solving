#include <iostream>

using namespace std;

int main()
{
    long long arr[200002],n,m=0,q=0,d,w=0,e=0;
    cin>>n>>arr[0];
    m=arr[0];
    q=arr[0];
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<m)
            m=arr[i];
        if(arr[i]>q)
            q=arr[i];
    }
    d=q-m;
    if(q==m)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==q)
                w++;
        }
        for(int j=w-1;j>=1;j--)
        {
            e+=j;
        }
        cout<<d<<" "<<e;
    }
    else{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==q)
            w++;
        if(arr[i]==m)
            e++;
    }
    cout<<d<<" "<<(w*e);
    }
    return 0;
}
