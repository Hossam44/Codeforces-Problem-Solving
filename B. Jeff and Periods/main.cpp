#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main()
{
    int arr[100001]={0},arr1[100001]={0},n,m=0,as[2],arr2[100001]={0},u=0,o=0,w=0,arr3[100001]={0},s=0,a=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    sort(arr1,arr1+n);
    for(int i=0;i<n;i++)
    {
        if(i==0 || arr1[i-1]!=arr1[i])
        {
            a=0;
            s=0;
            m=0;
            w=0;
            for(int j=w;j<n;j++)
            {
                if(arr1[i]==arr[j])
                    {arr3[m++]=j; w=j+1;}
                if(m>=6)
                    break;
            }
            if(m==1)
                s=0;
            else if(m==2)
                s=arr3[1]-arr3[0];
            if(m>2)
            {
            s=arr3[1]-arr3[0];
            for(int y=0;y<m-1;y++)
            {
                if(arr3[y+1]-arr3[y]!=s)
                    a++;
            }
            }
            if(a==0)
        {
            o++;
            arr2[u]=s;
            arr1[u++]=arr1[i];
        }
    }
    }
    if(u==0)
        cout<<"0";
    else
    {
    cout<<o<<endl;
    for(int b=0;b<u;b++)
    {
        cout<<arr1[b]<<" "<<arr2[b]<<endl;
    }
    }
    return 0;
}
