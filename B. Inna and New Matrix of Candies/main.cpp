#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,m,arr1[1500][2]={0},p=0,q=0,v=0;
    cin>>n>>m;
    char arr[1005][1005];
    for(int i=1;i<=n;i++)
    {
        p=0,v=0;
        for(int j=1;j<=m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='S')
                {
                    arr1[i][0]=j-p;
                if(arr1[i][0]>0)
                    q=arr1[i][0];
                    v++;
                }
            else if(arr[i][j]=='G')
            {
                arr1[i][1]=m-j;
                p=j;
                if(arr1[i][1]>0)
                    q=arr1[i][1];
                if(v>0)
                {arr1[i][0]=0; q=0;}
            }
        }
    }
    if(q==0)
    {
        cout<<"-1";
        exit(0);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2;j++)
        {
            if(q>arr1[i][j] && arr1[i][j]!=0)
                q=arr1[i][j];
        }
    }
    cout<<q;
        return 0;
}
