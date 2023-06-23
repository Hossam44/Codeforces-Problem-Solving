#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,q,arr[1000001],arr1[1000001]={0},arr2[300001],arr3[300001],a;
    cin>>n>>m>>q;
    for(int i=1;i<=m;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=q;i++)
    {
        cin>>arr3[i]>>arr2[i];
    }
    for(int i=1;i<=m;i++)
    {
        arr1[arr[i]]=i;
    }
    a=1;
    for(int i=1;i<=q;i++)
    {
        if(arr3[i]==a)
        {
            if(arr1[arr3[i]]>0)
            {
                cout<<arr3[i];
                exit(0);
            }
            a=arr2[i];
            if(arr1[a]>0)
            {
                cout<<arr2[i];
                exit(0);
            }
        }
        else if(arr2[i]==a)
        {
            if(arr1[arr2[i]]>0)
            {
                cout<<arr2[i];
                exit(0);
            }
            a=arr3[i];
            if(arr1[a]>0)
            {
                cout<<arr3[i];
                exit(0);
            }
        }
    }
    cout<<a;
    return 0;
}
