#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,r;
    double w,arr[1005],arr1[1005],m,q,temp;
    cin>>n>>m>>q>>w;
    w=100-w;
    w/=100;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]>>arr1[i];
        arr[i]=max((arr[i]*m*w)+arr1[i]*q,(arr1[i]*m*w)+arr[i]*q);
        arr1[i]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                r=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=r;
            }
            else if(arr[i]==arr[j])
            {
                if(arr1[i]>arr1[j])
                {
                r=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=r;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<fixed<<setprecision(0)<<arr1[i]<<" ";
        cout<<fixed<<setprecision(2)<<arr[i];
        cout<<endl;
    }
    return 0;
}
