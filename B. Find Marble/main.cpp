#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,m,q,arr[100005],arr1[100005]={0},count1=0,w=0;
    cin>>n>>m>>q;
    arr1[m]++;
    for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            if(arr[i]==q)
                w++;
        }
        if(m==q)
        {
            cout<<"0";
            exit(0);
        }
        if(w==0)
        {cout<<"-1"; exit(0);}
    while(1)
    {
        count1++;
        m=arr[m];
        arr1[m]++;
        if(arr1[m]>1)
        {
            cout<<"-1";
            exit(0);
        }
        if(m==q)
        {
            cout<<count1;
            exit(0);
        }
    }
    return 0;
}
