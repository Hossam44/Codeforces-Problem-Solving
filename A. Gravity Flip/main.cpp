#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int arr[101];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>arr[i])
            {
                m=arr[j]-arr[i];
                arr[i]+=m;
                arr[j]-=m;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
