#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n,m,k,arr[101][101],arr1[101]={0};
    cin>>n>>m>>k;
    map<int,int>ma0;
    map<int,int>blo;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=m;i++)
    {
        map<int,int>ma;
        for(int j=1;j<=n;j++)
        {
        if(arr[j][i]!=0 && blo[j]==0){
            if(ma0[arr[j][i]]==0)
            {
                if(ma[arr[j][i]]==0)
                    ma[arr[j][i]]=j;
                else
                {
                    ma0[arr[j][i]]=1;
                    if(arr1[ma[arr[j][i]]]>i || arr1[ma[arr[j][i]]]==0)
                        arr1[ma[arr[j][i]]]=i;
                    if(arr1[j]>i || arr1[j]==0)
                        arr1[j]=i;
                    blo[ma[arr[j][i]]]=1;
                    blo[j]=1;
                }
            }
            else
            {
                if(arr1[j]>i || arr1[j]==0)
                    arr1[j]=i;
                    blo[j]=1;
            }
        }
        }
    }
    for(int i=1;i<=n;i++)
        cout<<arr1[i]<<endl;
    return 0;
}
