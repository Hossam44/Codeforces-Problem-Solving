#include <iostream>

using namespace std;

int main()
{
    int arr[3][2],arr0[2][2],b=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
            cin>>arr[i][j];
    }
    for(int i=1;i<=9;i++)
    {
        arr0[0][0]=i;
        for(int j=1;j<=9;j++)
        {
            if(i+j==arr[0][0])
            {
                arr0[0][1]=j;
                break;
            }
        }
        for(int j1=1;j1<=9;j1++)
        {
            if(i+j1==arr[1][0])
            {
                arr0[1][0]=j1;
                break;
            }
        }
        for(int j2=1;j2<=9;j2++)
        {
            if(i+j2==arr[2][0])
            {
                arr0[1][1]=j2;
                break;
            }
        }
        if(arr0[1][0]+arr0[1][1]==arr[0][1] && arr0[0][1]+arr0[1][1]==arr[1][1] && arr0[0][1]+arr0[1][0]==arr[2][1])
        {
if(arr0[0][0]!=arr0[0][1] && arr0[0][0]!=arr0[1][0] && arr0[0][0]!=arr0[1][1] && arr0[0][1]!=arr0[1][0] && arr0[0][1]!=arr0[1][1] &&arr0[1][0]!=arr0[1][1])
            {
                b++;
                break;
            }
        }

    }
    if(b>0)
    {
        cout<<arr0[0][0]<<" "<<arr0[0][1]<<endl;
        cout<<arr0[1][0]<<" "<<arr0[1][1]<<endl;
    }
    else
        cout<<"-1";
    return 0;
}
