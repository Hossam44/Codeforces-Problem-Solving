#include <iostream>

using namespace std;
long long arr[100002]={0},arr1[100002]={0};
int main()
{
    long long n,m=0,w=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    m=arr[n-1];
    arr1[0]=0;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>m)
            {arr1[w++]=0; m=arr[i];}
        else
            arr1[w++]=m-arr[i]+1;
    }
    for(int i=n-1;i>=0;i--)
        cout<<arr1[i]<<" ";
    return 0;
}
