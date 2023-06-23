#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    long long m=0,k=0,q=0;
    string arr,arr1;
    int r=0;
    cin>>arr;
    cin>>r;
    for(int i=0;i<r;i++)
    {
        arr+=arr1;
    }
    if(arr.size()<=1)
    {
        cout<<"0";
        exit(0);
    }
    for(long long i=0;i<arr.size();i++)
    {
        m+=arr[i]-48;
    }
    while(m/10>=1)
    {
        arr=to_string(m);
        m=0;
        for(long long i=0;i<arr.size();i++)
        {
            m+=arr[i]-48;
        }
    }
    cout<<m;
    return 0;
}
