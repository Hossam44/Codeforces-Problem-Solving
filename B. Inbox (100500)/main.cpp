#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,arr[1001],count1=0,m=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
            m++;
    }
    if(m==1)
    {cout<<"1"; exit(0);}
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==1)
        {
            if(arr[i+1]==1)
                count1++;
            else
            {
                for(int j=i+1;j<n;j++)
                {
                    if(arr[j]==1)
                    {count1+=2; i=j-1; break;}
                }
            }
        }
    }
    if(count1>0)
        count1++;
    cout<<count1;
    return 0;
}
