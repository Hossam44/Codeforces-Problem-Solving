#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    long long n,m,b=0;
    cin>>n>>m;
if(n%2==0)
{
    if(m>n/2)
    {
        m-=(n/2);
        m*=2;
        cout<<m<<endl;
    }
    else
    {
        m=(m*2)-1;
        cout<<m<<endl;
    }
}
else
{
    if(m>(n/2)+1)
    {
        m=m-((n/2)+1);
        m*=2;
        cout<<m<<endl;
    }
    else
    {
        m=(m*2)-1;
        cout<<m<<endl;
    }
}
return 0;
}
