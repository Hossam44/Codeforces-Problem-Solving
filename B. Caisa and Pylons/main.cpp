#include <iostream>

using namespace std;

int main()
{
    int n,arr[100000],m=0,r=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
        r=arr[0];
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>=arr[i+1])
        {
            m+=arr[i]-arr[i+1];
        }
        else
        {
            if(arr[i+1]-arr[i]<=m)
            {
                m-=arr[i+1]-arr[i];
            }
            else
            {
                r+=arr[i+1]-arr[i]-m;
                m=0;
            }
        }
    }
    cout<<r;
    return 0;
}
