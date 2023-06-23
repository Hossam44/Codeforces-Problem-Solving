#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long n,arr[101],arr1[101],m=0,temp,o=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {cin>>arr[i]; arr1[i]=arr[i];}
    sort(arr1,arr1+n);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[j]==arr1[i])
            {m=j;  break;}
        }
        for(int k=m-1;k>=i;k--)
        {
            cout<<k+1<<" "<<k+2<<endl;
            temp=arr[k];
            arr[k]=arr[k+1];
            arr[k+1]=temp;
        }
    }
    return 0;
}
