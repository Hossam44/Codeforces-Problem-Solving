#include <iostream>

using namespace std;

int main()
{
    int n,arr[1001],k=0,m=0,r=0,y,u,p=0,e;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        m=i+1,k=i-1,r=0,u=arr[i],e=arr[i];
        while(m<n)
        {
            y=0;
            if(arr[m]<=u)
            {
                u=arr[m];
                m++;
                r++;
                y++;
            }
            if(y==0)
            {
                break;
            }
        }
        while(k<i && k>=0)
        {
            y=0;
            if(arr[k]<=e)
            {
                e=arr[k];
                k--;
                r++;
                y++;
            }
            if(y==0)
            {
                break;
            }
        }
        if(r>p)
        {
            p=r;
        }
    }
    cout<<p+1;

    return 0;
}
