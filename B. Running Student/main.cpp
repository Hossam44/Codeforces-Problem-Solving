#include <iostream>
#include <stdlib.h>
#include <deque>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    double arr[101];
    double arr1[101];
    int n,m,q,x,y;
    double d,f;
    cin>>n>>m>>q;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>x>>y;
    if(q>m)
    {
        cout<<"2";
        exit(0);
    }
    for(int i=0;i<n;i++)
    {
        arr1[i]=(arr[i]/m);
        f=(arr[i]-x);
        d=sqrt((f*f)+(y*y));
        arr1[i]+=(d/q);
    }
    f=arr1[1];
    for(int i=2;i<n;i++)
    {
        if(arr1[i]<f)
            f=arr1[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr1[i]==f)
        {
            cout<<i+1;
            exit(0);
        }
    }
    return 0;
}
