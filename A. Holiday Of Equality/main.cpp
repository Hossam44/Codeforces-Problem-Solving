#include <iostream>

using namespace std;

int main()
{
    int n,m;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    m=arr[0];
    for(int i=1;i<n;i++)
    {
        if(m<arr[i])
        {
            m=arr[i];
        }

    }
    int t=0;
    for(int i=0;i<n;i++)
        {
            t+=m-arr[i];
        }
        cout<<t;
    return 0;
}
