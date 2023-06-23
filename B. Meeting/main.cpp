#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a,b,c,d,n,arr[1001][3],m,k=0,q=0,w=0;
    cin>>a>>b>>c>>d;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    if(a>c)
    {
        a+=c;
        c=a-c;
        a-=c;
    }
    for(int i=a;i<=c;i++)
    {
        q=0;
        for(int j=0;j<n;j++)
        {
            k=((i-arr[j][0])*(i-arr[j][0]));
            m=((b-arr[j][1])*(b-arr[j][1]));
            m=sqrt(k+m);
            if(m<=arr[j][2])
            {
                q++;
                break;
            }
        }
        if(q==0)
            w++;
    }
    for(int i=a;i<=c;i++)
    {
        q=0;
        for(int j=0;j<n;j++)
        {
            k=((i-arr[j][0])*(i-arr[j][0]));
            m=((d-arr[j][1])*(d-arr[j][1]));
            m=sqrt(k+m);
            if(m<=arr[j][2])
            {
                q++;
                break;
            }
        }
        if(q==0)
            w++;
    }
    if(b>d)
    {
        b+=d;
        d=b-d;
        b-=d;
    }
    for(int i=b+1;i<d;i++)
    {
        q=0;
        for(int j=0;j<n;j++)
        {
            k=((a-arr[j][0])*(a-arr[j][0]));
            m=((i-arr[j][1])*(i-arr[j][1]));
            m=sqrt(k+m);
            if(m<=arr[j][2])
            {
                q++;
                break;
            }
        }
        if(q==0)
            w++;
    }
    for(int i=b+1;i<d;i++)
    {
        q=0;
        for(int j=0;j<n;j++)
        {
            k=((c-arr[j][0])*(c-arr[j][0]));
            m=((i-arr[j][1])*(i-arr[j][1]));
            m=sqrt(k+m);
            if(m<=arr[j][2])
            {
                q++;
                break;
            }
        }
        if(q==0)
            w++;
    }
    cout<<w;
    return 0;
}
