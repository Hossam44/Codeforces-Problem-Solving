#include <iostream>

using namespace std;

int main()
{
    int arr[45000]={0},n,m,q,w,e,r,arr1[100000];
    int k=2;
    cin>>n>>m>>q>>w;
    for(int i=1;i<=q;i++)
    {
        cin>>e>>r;
        arr[e]=1;
    }
    for(int i=1;i<=w;i++)
    {
        cin>>e>>r;
    }
    for(int i=1;i<=n*m;i++)
    {
        if(arr[i]!=1)
        {
            arr[i]=k;
            k++;
        }
        if(k==5)
            k=2;
    }
    for(int i=1;i<=w;i++)
    {
        if(arr[arr1[i]]==1)
            cout<<"Waste"<<endl;
        else if(arr[arr1[i]]==2)
            cout<<"Carrots"<<endl;
        else if(arr[arr1[i]]==3)
            cout<<"Kiwis"<<endl;
        else
            cout<<"Grapes"<<endl;
    }
    return 0;
}
