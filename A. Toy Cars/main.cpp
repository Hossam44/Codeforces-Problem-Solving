#include <iostream>

using namespace std;

int main()
{
    int arr[100][100],arr1[100]={0};
    int n,k=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
                arr1[i]=-1;
            else if(arr[i][j]==2)
                arr1[j]=-1;
            else if(arr[i][j]==3)
            {
                arr1[i]=-1;
                arr1[j]=-1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr1[i]==0)
            k++;
    }
    cout<<k<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr1[i]==0)
            cout<<i+1<<" ";
    }
    return 0;
}
