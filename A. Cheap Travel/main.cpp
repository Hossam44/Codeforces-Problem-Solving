#include <iostream>

using namespace std;

int main()
{
    int n,m,a,b,c;
    cin>>n>>m>>a>>b;
    float f,g;
    f=float(a);
    g=float(b)/float(m);
    if(f<=g)
    {
        cout<<n*a;
    }
    else
{
        if(n%m==0)
    {
            cout<<(n/m)*b;
    }
        else
    {
                if(n>=m)
        {

            c=(n/m)*b;
            if(b<a)
            {
                c+=b;
                cout<<c;
            }
            else
            {
                int k;
                k=n-((n/m)*m);
                cout<<c+(k*a);
            }
        }
        else
        {
            if((n*a)>b)
            cout<<b;
            else
                cout<<n*a;
        }
    }
}
    return 0;
}
