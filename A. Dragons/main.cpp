#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int s,n;
    int arr[1000][2],t;
    cin>>s>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
            cin>>arr[i][j];
    }

        for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
            {
                if(arr[i][0]>arr[j][0])
                {
                    t=arr[i][0];
                    arr[i][0]=arr[j][0];
                    arr[j][0]=t;
                    t=arr[i][1];
                    arr[i][1]=arr[j][1];
                    arr[j][1]=t;
                }
            }
    }

    for(int i=0;i<n;i++)
    {
        if(s>arr[i][0])
            s+=arr[i][1];
        else
        {
            cout<<"NO"<<endl;
            exit(0);
        }
    }
    cout<<"YES"<<endl;

    return 0;
}
