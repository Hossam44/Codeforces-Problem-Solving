#include <iostream>

using namespace std;

int main()
{
    int n=0,m=0;
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<4;i++)
    {
        if(arr[i]!=m)
        for(int j=i+1;j<4;j++)
        {
            if(arr[i]==arr[j])
            {
                n++;
                m=arr[i];
            }
        }
    }
    cout<<n;
    return 0;
}
