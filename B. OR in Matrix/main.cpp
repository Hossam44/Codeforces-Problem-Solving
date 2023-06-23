#include <iostream>

using namespace std;

int main()
{
    int n,m,arr[100][100],arr1[100]={0},arr2[100]={0},arr3[10000],k=0,u=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        if(arr[i][j]==0)
        {
            arr1[i]=1;
            arr2[j]=1;
        }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr1[i]==0 && arr2[j]==0)
            {arr3[k++]=1; u++;}
            else
                arr3[k++]=0;

        }
    }
    if(u==0)
        cout<<"NO";
    else
    {
        u=0;
        cout<<"YES"<<endl;
        for(int i=0;i<k;i++)
        {
            u++;
            cout<<arr3[i]<<" ";
            if(u==m)
            {cout<<endl; u=0;}
        }
    }
    return 0;
}
