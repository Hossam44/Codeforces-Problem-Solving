#include <iostream>

using namespace std;

int main()
{
    int n,m=0;
    int arr[102];
    int arr1[102];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int j=1;j<=n;j++)
    {
        m++;
       for(int i=1;i<=n;i++)
      {
        if(arr[i]==m)
        {
            arr1[j]=i;
        }
      }
    }
    for(int i=1;i<=n;i++)
        cout<<arr1[i]<<" ";
    return 0;
}
