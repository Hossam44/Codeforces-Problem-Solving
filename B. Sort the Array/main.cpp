#include <iostream>

using namespace std;

int main()
{
    long long n,arr[100001],m=0,q=0,w,e,r=0,arr1[100001],a=0;
    cin>>n;
    cin>>arr[0];
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<arr[i-1])
        {
            arr1[m++]=arr[i-1];
            a=i;
            if(m==1)
                w=i-1;
        }
    }
    arr1[m]=arr[a];
    q=m;
    e=w;
    if(m!=0)
    {
    while(r<=m)
    {
        arr[e++]=arr1[q--];
        r++;
    }
    e=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            e++;
        }
    }
        if(e==0)
        cout<<"yes"<<endl<<w+1<<" "<<w+m+1;
        else
        cout<<"no";
    }
    else
        cout<<"yes"<<endl<<"1"<<" 1";
    return 0;
}
