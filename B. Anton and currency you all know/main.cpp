#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main()
{
    int m;
    string arr;
    char ch;
    cin>>arr;
    m=arr.size();
    if(m==1)
    {
        cout<<"-1";
        exit(0);
    }
    for(int i=0;i<m-1;i++)
    {
        if(arr[i]=='0' || arr[i]=='2' || arr[i]=='4' || arr[i]=='6' || arr[i]=='8')
        {
            if(arr[m-1]>arr[i])
            {
                ch=arr[i];
                arr[i]=arr[m-1];
                arr[m-1]=ch;
                cout<<arr;
                exit(0);
            }
        }
    }
    for(int i=m-2;i>=0;i--)
    {
        if(arr[i]=='0' || arr[i]=='2' || arr[i]=='4' || arr[i]=='6' || arr[i]=='8')
        {
            ch=arr[i];
            arr[i]=arr[m-1];
            arr[m-1]=ch;
            cout<<arr;
            exit(0);
        }
    }
    cout<<"-1";
    return 0;
}
