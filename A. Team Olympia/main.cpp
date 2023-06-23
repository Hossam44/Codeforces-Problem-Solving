#include <iostream>

using namespace std;

int main()
{
    int m,n,arr1[5005],arr2[5005],arr3[5005],q=0,w=0,e=0,r;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>n;
        if(n==1)
            arr1[q++]=i;
        else if(n==2)
            arr2[w++]=i;
        else
            arr3[e++]=i;
    }
    if(q<=w)
    {
        if(q<=e)
            r=q;
        else
            r=e;
    }
    else
    {
        if(w<=e)
            r=w;
        else
            r=e;
    }
    cout<<r<<endl;
    for(int i=0;i<r;i++)
    {
        cout<<arr1[i]+1<<" "<<arr2[i]+1<<" "<<arr3[i]+1<<endl;
    }
    return 0;
}
