#include <iostream>
#include <map>
#include <stdlib.h>
using namespace std;

int main()
{
    long long arr[100000],arr1[100000],n,x,z,co=0,co1=0,k,m,fin=1000000;
    map<long long,long long>left;
    map<long long,long long>right;
    cin>>n;
    if(n%2==0)
        k=n/2;
    else
        k=(n/2)+1;
    for(int i=0;i<n;i++)
    {
        cin>>x>>z;
        if(x==z)
        {
            if(left[x]==0)
                {arr[co++]=x; left[x]++;}
            else
                left[x]++;
        }
        else
        {
            if(left[x]==0)
                {arr[co++]=x; left[x]++;}
            else
                left[x]++;
            if(right[z]==0)
                {arr1[co1++]=z; right[z]++;}
            else
                right[z]++;
        }
    }
    for(int i=0;i<co;i++)
    {
        m=1000001;
        if((left[arr[i]]+right[arr[i]])>=k)
        {
            m=k-left[arr[i]];

            if(m<0)
            {
                cout<<"0";
                exit(0);
            }
        }
            if(m<fin)
                {fin=m;}
    }
    if(fin==1000000)
    {
        for(int i=0;i<co1;i++)
        {
            if(right[arr1[i]]>=k)
            {
                cout<<k;
                exit(0);
            }
        }
    }
    if(fin==1000000)
        cout<<"-1";
    else
        cout<<fin;
    return 0;
}
