#include <iostream>

using namespace std;

int main()
{
    int n,m,k=0,u=1;
    int arr[100000];
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>arr[i];
    }
    arr[0]=1;
    for(int i=0;i<m;i++)
    {
        if(arr[i+1]>=arr[i])
            k+=arr[i+1]-arr[i];
        else
            k+=n-arr[i]+arr[i+1];
    }
    cout<<k;
        return 0;
}
