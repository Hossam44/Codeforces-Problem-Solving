#include <iostream>

using namespace std;

int main()
{
    double n,m,q,w,e,r,t=0,y=0,p=0;
    cin>>n>>m>>q>>w>>e;
    r=n*q;
    while(r<e)
    {
        r+=n;
        t+=m;
        if(t>=r && r<e )
        {
            y=m/(m-n);
            r+=y*n;
            r+=w;
            t=0;
            p++;

        }
    }
    cout<<p;

    return 0;
}
