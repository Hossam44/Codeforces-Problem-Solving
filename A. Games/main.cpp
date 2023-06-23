#include <iostream>

using namespace std;

int main()
{
    int n,m=0;
    cin>>n;
    int arr[30][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        cin>>arr[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i][0]==arr[j][1])
                m++;
            if(arr[i][1]==arr[j][0])
                m++;
        }
    }
    cout<<m;
    return 0;
}
