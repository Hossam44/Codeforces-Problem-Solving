#include <iostream>

using namespace std;

int main()
{
    int arr[101],n,m=0;
    for(int i=0;i<101;i++)
        arr[i]=2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1 && arr[i+1]!=2)
        {
            m++;
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j]==1 && arr[j+1]!=2)
                    m++;
                else
                    break;
            }
        }
    }
    cout<<m;
    return 0;
}
