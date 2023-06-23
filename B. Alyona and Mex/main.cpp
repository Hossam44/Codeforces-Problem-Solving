#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long arr[100005];
    int n,m=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    arr[0]=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1]+1 && arr[i]!=arr[i-1])
            arr[i]=arr[i-1]+1;
    }
    cout<<arr[n-1]+1;
    return 0;
}
