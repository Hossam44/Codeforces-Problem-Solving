#include <iostream>
#include <string>

using namespace std;

int main()
{
    int arr[183][183],n,m,q,arr1[10000][2]={0},x,z,s,w;
    string ss;
    cin>>q;
    for(int k=0;k<q;k++){
    cin>>n>>m;
    s=1000000;
    w=0;
    for(int i=1;i<=n;i++)
    {
        cin>>ss;
        for(int j=1;j<=m;j++)
        {
            arr[i][j]=ss[j-1]-48;
            if(arr[i][j]==1)
            {
                arr1[w][0]=i;
                arr1[w++][1]=j;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(arr[i][j]==1)
                arr[i][j]=0;
            else if(arr[i][j]==0)
            {
                for(int e=0;e<w;e++)
                {
                    x=i-arr1[e][0];
                    z=j-arr1[e][1];
                    if(x<0)
                        x*=-1;
                    if(z<0)
                        z*=-1;
                    if(x+z<s)
                        s=x+z;
                }
                arr[i][j]=s;
            }
            s=1000000;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
    return 0;
}
