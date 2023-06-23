#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,r,q,w;
    cin>>a>>b>>c>>d;
    e=(a*d)-(c*b);
    r=(b*c)-(d*a);
    if(r<0)
    {
        w=a*d;
        q=min(e,w);
        for(int i=2;i<=q;i++)
        {
            if(w%i==0 && e%i==0)
            {
                w/=i;
                e/=i;
                i=2;
            }
        }
        for(int i=2;i<=q;i++)
        {
            if(w%i==0 && e%i==0)
            {
                w/=i;
                e/=i;
                i=2;
            }
        }
        cout<<e<<"/"<<w;
    }
    else if(e<0)
    {
        w=b*c;
        q=min(r,w);
        for(int j=2;j<=q;j++)
        {
            if(w%j==0 && r%j==0)
            {
                w=w/j;
                r=r/j;
                j=2;
                q=min(r,w);
            }
        }
        for(int j=2;j<=q;j++)
        {
            if(w%j==0 && r%j==0)
            {
                w=w/j;
                r=r/j;
                j=2;
                q=min(r,w);
            }
        }
        cout<<r<<"/"<<w;
    }
    else
    {
        cout<<"0/1";
    }
    return 0;
}
