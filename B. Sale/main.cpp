#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int m,n=0,q;
    cin>>m>>q;
    int *arr=new int[m];
    for(int i=0;i<m;i++)
        cin>>arr[i];
    sort(arr,arr+m);
    for(int i=0;i<m;i++)
    {
        if(arr[i]>=0)
            break;
        else if(arr[i]<0 &&q>0)
        {
            n+=(arr[i]*-1);
            q--;
        }
    }
    cout<<n;
    return 0;
}
