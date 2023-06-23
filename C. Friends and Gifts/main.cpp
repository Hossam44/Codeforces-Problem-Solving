#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int,int>ar;
    int arr[200005]={0},arr1[200005];
    int n,m,k=0,z=0;
    cin>>n;
    auto it=ar.begin();
    for(int i=0;i<n;i++)
    {
        cin>>m;
        arr1[i]=m;
        it=ar.emplace_hint(it,m,1);
    }
    for(int i=1;i<=n;i++)
    {
        if(ar[i]==0)
            arr[k++]=i;
    }
    for(int i=0;i<n;i++)
    {
        if(arr1[i]==0 && ar[i+1]!=1)
        {
            for(int j=z;j<k;j++)
            {
                if(arr[j]!=i+1 && arr[j]!=0)
                {
                    arr1[i]=arr[j];
                    arr[j]=0;
                    z=j;
                    if(j==k-1)
                        z=0;
                    break;
                }
                if(j==k-1)
                    {z=0; j=-1;}
            }
        }
    }
    z=0;
    for(int i=0;i<n;i++)
    {
        if(arr1[i]!=0)
            cout<<arr1[i]<<" ";
        else
        {
            for(int j=z;j<k;j++)
            {
                if(arr[j]!=0)
                {
                    cout<<arr[j]<<" ";
                    arr[j]=0;
                    z=j;
                    if(j==k-1)
                        z=0;
                    break;
                }
                if(j==k-1)
                    {z=0; j=-1;}
            }
        }
    }
    return 0;
}
