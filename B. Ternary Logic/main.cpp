#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    char arr[10000],arr1[10000],arr2[10000];
    long long int m,n,k=0,l=0,w=0;
    cin>>n>>m;
    while(n!=0)
    {
        arr[k++]=char((n%3)+48);
        n/=3;
    }
    while(m!=0)
    {
        arr1[l++]=char((m%3)+48);
        m/=3;
    }
    if(k>l)
    {
        for(int i=l;i<k;i++)
            arr1[i]='0';
    }
    else if(l>k)
    {
        for(int i=k;i<l;i++)
            arr[i]='0';
    }
     k=max(k,l);
   for(int i=0;i<k;i++)
    {
        if(arr[i]>arr1[i])
        {
            if(arr[i]=='2' && arr1[i]=='0')
                arr2[i]='1';
            else
                arr2[i]='2';
        }
        else
            arr2[i]=char(arr1[i]-arr[i]+48);

    }
for(int i=0;i<k;i++)
{
    w+=(arr2[i]-48)*pow(3,i);
}
cout<<w;

        return 0;
}
