#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,f=0,a=0,q=0;
    char ch;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ch;
        if(ch=='F')
            f++;
        else if(ch=='A')
            a++;
        else
            q++;
    }
    if(q>1)
    {
        cout<<"0";
        exit(0);
    }
    if(q==1)
    {
        cout<<"1";
        exit(0);
    }
    cout<<a;
    return 0;
}
