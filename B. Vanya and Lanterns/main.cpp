#include <iostream>

using namespace std;

int main()
{
    long long arr[1002],z=0,m,n,arr1[1002],temp;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    arr1[0]=(arr[0]-0)*2;
    arr[n]=(m-arr[n-1])*2;
    if(arr1[0]>arr1[n])
        z=arr1[0];
    else
        z=arr1[n];
    for(int i=0;i<n-1;i++)
    {
        arr1[i+1]=arr[i+1]-arr[i];
        if(arr1[i+1]>z)
            z=arr1[i+1];
    }
    if(z%2==0)
        cout<<z/2<<".0000000000";
    else
        cout<<z/2<<".5000000000";

    return 0;
}
