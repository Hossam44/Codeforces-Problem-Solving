#include <iostream>

using namespace std;

int main()
{
    int n,m,t,p=0;
    cin>>n>>m;
    t=240-m;
    for(int i=1;i<=n;i++)
    {
        t-=(i*5);
        if(t<0)
        {
            p++;
            cout<<i-1;
            break;
        }
    }
    if(p==0)
        cout<<n;
    return 0;
}
