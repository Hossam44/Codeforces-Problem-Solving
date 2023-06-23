#include <iostream>

using namespace std;

int main()
{
    int q,w,e,r,arr[50][2],arr1[50][2],f=0,s=0;
    cin>>q>>w>>e>>r;
    for(int i=0;i<q;i++)
    {
        for(int j=0;j<2;j++)
        cin>>arr[i][j];
    }
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<2;j++)
        cin>>arr1[i][j];
    }
    for(int i=e;i<=r;i++)
    {
        for(int j=0;j<q;j++)
        {
            for(int k=0;k<w;k++)
            {
                f=0;
                if(i+arr1[k][0]>=arr[j][0] && i+arr1[k][0]<=arr[j][1])
                    f++;
                if(i+arr1[k][1]>=arr[j][0] && i+arr1[k][1]<=arr[j][1])
                    f++;
                    if(f>0)
                        break;
            }
            if(f>0)
            {
                s++;
                cout<<i<<endl;
                break;
            }
        }
    }
    cout<<s;
    return 0;
}
/*
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    int p, q, l, r, a, b, t[2010], c[2010], d[2010], ans=0;
    cin>>p>>q>>l>>r;
    for(int i=0;i<2010;++i)t[i]=0;
    for(int i=0;i<p;++i){
        cin>>a>>b;
        for(int j=a;j<=b;++j)
            t[j]=1;
    }
    for(int i=0;i<q;++i)
        cin>>c[i]>>d[i];
    for(int i=l;i<=r;++i)
    {
        bool flag=true;
        for(int j=0;j<q&&flag;++j)
        {
            for(int k=c[j]+i;k<=d[j]+i;++k)
                if(t[k])
                {
                    flag=false;
                    break;
                }
        }
        if(!flag){ans++;
         cout<<i<<endl;}
    }
    cout<<ans<<endl;
    return 0;
}*/
