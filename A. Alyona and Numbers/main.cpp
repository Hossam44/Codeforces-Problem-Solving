#include <iostream>

using namespace std;

int main()
{
    long long m,n,q,w,y=0;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        q=i+n;
        q/=5;
        if(i/5>=1)
        {
            w=i/5;
            q-=w;
        }
        y+=q;
    }
    cout<<y;
    return 0;
}
