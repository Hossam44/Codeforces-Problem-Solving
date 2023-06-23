#include <iostream>

using namespace std;

int main()
{
    int n,m,arr[105],arr1[105][2],a,b,c=0,total=0;
    cin>>n>>m;
    arr[0]=0;
    cin>>arr[1];
    for(int i=2;i<=n;i++)
    {
        cin>>arr[i];
        arr[i]+=arr[i-1];
    }
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        if(arr[b]-arr[a-1]>0)
        {
            arr1[c][0]=a;
            arr1[c++][1]=b;
        }
    }
    for(int i=1;i<=n;i++)
    {
        int b=0;
        for(int j=0;j<c;j++)
        {
            if(i>=arr1[j][0] && i<=arr1[j][1])
                b++;
        }
        total+=(arr[i]-arr[i-1])*b;
    }
    cout<<total;
    return 0;
}
