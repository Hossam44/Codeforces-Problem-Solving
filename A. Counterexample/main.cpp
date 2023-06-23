#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    long long n,m,arr[3],v;
    int g=0;
    cin>>n>>m;
    if(m-n<2)
    {
        cout<<"-1";
        exit(0);
    }
    if(n%2==0)
    {
        arr[g++]=n;
        arr[g++]=n+1;
        arr[g++]=n+2;

            for(int i=0;i<3;i++)
                cout<<arr[i]<<" ";
    }
    else
    {
        if(m-n>2)
        {
        arr[g++]=n+1;
        arr[g++]=n+2;
        arr[g++]=n+3;

            for(int i=0;i<3;i++)
                cout<<arr[i]<<" ";
        }
        else
            cout<<"-1";
    }
    return 0;
}
