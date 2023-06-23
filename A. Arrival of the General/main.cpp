#include <iostream>

using namespace std;

int main()
{
    int n,m,c,t=1;
    int arr[100];
    int arr1[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    m=arr[0];
    c=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>m)
        {
            m=arr[i];
            c=i;
        }
    }
    arr1[0]=arr[c];
    for(int i=0;i<n;i++)
    {
        if(i!=c)
        {
            arr1[t++]=arr[i];
        }
    }
    t=c;
    m=arr1[0];
    c=0;
    for(int i=1;i<n;i++)
    {
        if(arr1[i]<=m)
        {
            m=arr1[i];
            c=i;
        }
    }
    t+=(n-1-c);
    cout<<t<<endl;
    return 0;
}
