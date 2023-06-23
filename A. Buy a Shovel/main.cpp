#include <iostream>

using namespace std;

int main()
{
    int k,r,w;
    cin>>k>>r;
    w=k;
    r+=10;
    for(int i=1;i<10;i++)
    {
        if(k%10==0 || (k-r)%10==0)
        {
            cout<<i;
            break;
        }
        k+=w;
    }
    return 0;
}
