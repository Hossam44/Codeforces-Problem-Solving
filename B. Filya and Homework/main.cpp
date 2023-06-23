#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main()
{
    long long n,arr[100000],arr2[3];
    int p=0,k=0;
    cin>>n;
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(k==0)
            {
                arr2[k++]=arr[i];
            }
            else if(k==1)
            {
                if(arr[i]!=arr2[0])
                    arr2[k++]=arr[i];
            }
            else if(k==2)
            {
                if(arr[i]!=arr2[0] && arr[i]!=arr2[1])
                    arr2[k++]=arr[i];
            }
            else
            {
                if(arr[i]!=arr2[0] && arr[i]!=arr2[1] && arr[i]!=arr2[2])
                    p=3;
            }
        }
        if(p==3)
        {
            cout<<"NO";
            exit(0);
        }
        else if(k==1 || k==2)
        {
            cout<<"YES";
            exit(0);
        }
        else
        {
            sort(arr2,arr2+3);
            if(arr2[2]-arr2[1]==arr2[1]-arr2[0])
                cout<<"YES";
            else
                cout<<"NO";
        }
    return 0;
}
