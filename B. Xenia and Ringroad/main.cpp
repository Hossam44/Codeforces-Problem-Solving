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
    for(int i=1;i<=m;i++)
    {
        for(int j=u;j<=n;j++)
        {
            if(j==arr[i])
            {
                u=arr[i];
                break;
            }
            else
                k++;
            if(j==n)
                j=0;
        }
    }
    cout<<k;
    return 0;
}
