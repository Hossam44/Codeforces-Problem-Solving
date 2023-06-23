#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,m=0,v=0;
    cin>>n;
    for(int i=2;n>m;i++)
    {
        v=0;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                v++;
                break;
            }
        }
        if(v==0)
        {
            cout<<i<<" ";
            m++;
        }
    }
    return 0;
}
