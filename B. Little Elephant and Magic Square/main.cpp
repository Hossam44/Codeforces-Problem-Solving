#include <iostream>

using namespace std;

int main()
{
    int arr[3][3],n,m,q,x,y,z;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cin>>arr[i][j];
    }
    n=arr[0][1]+arr[0][2];
    m=arr[0][2]+arr[2][0];
    q=arr[0][2]+arr[1][2];
    y=((n-m)+q)/2;
    x=q-y;
    z=n-y;
    arr[0][0]=x;
    arr[1][1]=y;
    arr[2][2]=z;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<arr[i][j]<<" ";
            cout<<endl;
    }
    return 0;
}
