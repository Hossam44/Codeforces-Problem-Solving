#include <iostream>

using namespace std;

int main()
{
    int n=2000,k,t=0;
    int arr[n];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    n=(n/3)*3;
    n=n/3;
    int w=0,p=0;
    for(int i=0;i<n;i++)
    {
        p=0;
        for(int j=w;j<w+3;j++)
        {
            if((arr[j]+k)>5)
                p++;
        }
        if(p==0)
            t++;
        w+=3;
    }
cout<<t;
    return 0;
}
