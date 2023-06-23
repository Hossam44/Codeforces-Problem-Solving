#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main()
{
    long long n,m,arr[3005],q=0;
    cin>>n>>m;
    arr[0]=-10;
    arr[m]=-10;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    if(arr[0]==1 || arr[m-1]==n)
    {
        cout<<"NO";
        exit(0);
    }
    for(int i=1;i<m;i++)
    {
        if(arr[i]-1==arr[i-1])
        {
            q++;
        }
        else
        {
            q=0;
        }
    if(q==2)
    {
        cout<<"NO";
        exit(0);
    }
    }
    cout<<"YES";
    return 0;
}
