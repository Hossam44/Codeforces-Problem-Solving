#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>=b)
    {
        a-=b;
        cout<<b<<" ";
        if(a%2==0)
            cout<<a/2;
        else
            cout<<(a-1)/2;
    }
    else
        {
            b-=a;
            cout<<a<<" ";
            if(b%2==0)
                cout<<b/2;
            else
                cout<<(b-1)/2;
        }
    return 0;
}
