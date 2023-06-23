#include <iostream>

using namespace std;

int main()
{
    int n,m,q=0,w=0;
    int arr[31],arr1[31];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]>>arr1[i];
        q+=arr[i];
        w+=arr1[i];
        arr1[i]=arr1[i]-arr[i];
    }
    if(m>=q &&m<=w)
{
    for(int i=0;i<n;i++)
    {
        m-=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(m>=arr1[i])
        {
            arr[i]+=arr1[i];
            m-=arr1[i];
            arr1[i]=0;
        }
        else
        {
            arr[i]+=m;
            m=0;
            break;
        }
    }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
}
    else
        cout<<"NO";
    return 0;
}
