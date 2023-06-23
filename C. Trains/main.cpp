#include <iostream>

using namespace std;

int main()
{
    int long long n,m,q=0,w=0,x=0,z=0,b;
    cin>>n>>m;
    b=n*m;
    x=n;z=m;
    while(x!=b)
    {
        if(x%m==0)
            break;
        q++;
        x+=n;
    }
    while(z!=b)
    {
        if(z%n==0)
            break;
        w++;
        z+=m;
    }
    if(q<w)
        q++;
    else
        w++;
    if(q>w)
        cout<<"Dasha";
    else if(q<w)
        cout<<"Masha";
    else
        cout<<"Equal";
    return 0;
}
