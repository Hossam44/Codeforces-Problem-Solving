#include <iostream>

using namespace std;

int main()
{
    long long n,m,arr[20],arr1[20],arr2[20],r=0,l=1,k=0;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i]>>arr1[i];
        arr2[i]=i;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(arr1[i]<arr1[j])
            {
                int temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
                int u=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=u;
            }
        }
    }
    while(l==1)
    {
        if(n>arr[arr2[k]])
        {
            r+=arr[arr2[k]]*arr1[k];
            n-=arr[arr2[k]];
            k++;
            if(k==m)
                break;
        }
        else if(n==arr[arr2[k]])
        {
            r+=arr[arr2[k]]*arr1[k];
            l++;
        }
        else
        {
            r+=n*arr1[k];
            l++;
        }
    }
    cout<<r;
    return 0;
}
