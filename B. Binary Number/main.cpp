#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    string arr;
    cin>>arr;
    long long n,m=0,q=0;
    n=arr.size();
    if(n==1)
    {
        cout<<"0";
        exit(0);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='1')
            m++;
    }
    if(m==1)
    {
        cout<<n-1;
        exit(0);
    }
    m=0;
    if(arr[n-1]=='0')
    {
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]=='1')
                m++;
            if(m>0)
            {
                if(arr[i]=='0')
                q++;
            }
        }
        n+=q+1;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]=='0')
                q++;
        }
        n+=q+1;
    }
    cout<<n;
    return 0;
}
