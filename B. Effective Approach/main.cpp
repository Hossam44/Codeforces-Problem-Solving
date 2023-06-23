#include <iostream>

using namespace std;

int main()
{
    int n,m,arr[100000],arr1,z=0,x=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>arr1;
            for(int j=1;j<=n;j++)
        {
           if(arr1==arr[j])
           {
               z+=j;
               x+=n-j+1;
               break;
           }
        }
    }
    cout<<z<<" "<<x;

      return 0;
}
