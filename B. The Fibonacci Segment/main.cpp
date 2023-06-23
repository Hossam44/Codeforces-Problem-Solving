#include <iostream>

using namespace std;

int main()
{
    int n,arr[100000],m=0,w=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=2;i<n;i++)
    {
        if(arr[i]==arr[i-1]+arr[i-2])
            {
                w++;
            }
        else
            {
                if(w>m)
                {
                    m=w;
                }
                    w=0;
            }
        if(i==n-1)
        {
            if(w>m)
            {
                m=w;
                w=0;
            }
        }
    }
    if(n==1)
        cout<<"1";
    else if(n==2)
        cout<<"2";
    else
        cout<<m+2;
    return 0;
}
