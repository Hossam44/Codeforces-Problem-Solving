#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,arr[100000]={0},k=0,x,z=0,u=0,count1,q=0,w,f=0,arr1[100000]={0},a=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=k;i<n;i++)
    {
        x=arr[i];
        z=0;
        u=0;
        count1=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==x)
                f=j+1;
            if(u==0 && arr[j]!=x)
            {
                z=arr[j];
                u++;
            }
            if(arr[j]==x || arr[j]==z)
            {
                count1++;
            }
            else
            {
                k=f;
                break;
            }
        }
        arr1[q++]=count1;
    }
    w=arr1[0];
    for(int i=0;i<q;i++)
    {
        if(arr1[i]>w)
            w=arr1[i];
    }
    cout<<w;
    return 0;
}
