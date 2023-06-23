#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,z,c=0,q,w=0,b=0;
    cin>>n>>m>>z;
    int v[100000]={0};
    for(int i=0;i<n*m;i++)
    {
        cin>>v[i];
    }
    sort(v,v+(n*m));
    q=(n*m)/2;
    for(int i=0;i<m*n;i++)
    {
        if(i<=q)
        {
            c=v[q]-v[i];
            if(c%z!=0)
                w++;
            else
                b+=c/z;
        }
        else
        {
            c=v[i]-v[q];
            if(c%z!=0)
                w++;
            else
                b+=c/z;
        }
    }
    if(w>0)
        cout<<"-1";
    else
        cout<<b;
    return 0;
}
