#include <iostream>

using namespace std;

int main()
{
    int t,a,b,q,a1,b1,z;
    int long long l,r,x=0,n,m,e,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a1>>b1>>q;
        b=max(a1,b1);
        a=min(a1,b1);
        if(a%b==0 || b%a==0)
        {
            for(int w=0;w<q;w++)
                cout<<"0 ";
        }
        else
        {
            for(int j=0;j<q;j++)
            {
                e=0;
                c=0;
                cin>>l>>r;
                if(l<=b)
                    l=b;
                if(r<b)
                    cout<<"0 ";
                else
                {
                    z=a*b;
                    x=r-l+1;
                    n=l/z;
                    m=r/z;
                    m-=n;
                    if(m>0)
                    {
                        x-=(m-1)*b;
                        c=r-((r/z)*z);
                        if(c>b)
                            c=b;
                        x-=c;
                    }
                    else
                        x-=m*b;
                    //
                    n=n*z;
                    if(n+b>=l)
                        e=n+b-l;
                    cout<<x-e<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
