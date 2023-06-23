#include <iostream>

using namespace std;

int main()
{
    int n,m,arr[101],c=0,k,u;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(arr[m-1]==1)
    {
        c++;
    }
    k=m-2;
    u=m;
    while(u!=n||k!=-1)
    {
        if(k==-1)
        {
            if(arr[u]==1)
            {
                c++;
            }
                u++;
        }
        else if(u==n)
        {
            if(arr[k]==1)
            {
                c++;
            }
                k--;
        }
        else
        {
            if(arr[k]==1 &&arr[u]==1)
            {
                c++;
                c++;
            }
            k--;
            u++;
        }
    }
    cout<<c;
    return 0;
}
