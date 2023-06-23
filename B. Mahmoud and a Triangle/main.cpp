#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main()
{
    long long n,arr[100003]={0},p=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++)
    {
        p=0;
        if(arr[i]+arr[i+1]>arr[i+2])
            p++;
        if(arr[i]+arr[i+2]>arr[i+1])
            p++;
        if(arr[i+2]+arr[i+1]>arr[i])
            p++;
            if(p==3)
            {cout<<"YES"; exit(0);}
    }
    cout<<"NO";
    return 0;
}
