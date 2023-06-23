#include <iostream>

using namespace std;

int main()
{
    int q,w,e,r,t,y,u,i,o;
    cin>>q>>w>>e;
    r=q+(w*e);
    t=q*(w+e);
    y=q*w*e;
    u=(q+w)*e;
    i=q+w+e;
    o=q*w+e;
    if(r>=t&&r>=y&&r>=u&&r>=i&&r>=o)
        cout<<r<<endl;
    else if(t>=r&&t>=y&&t>=u&&t>=i&&t>=o)
        cout<<t<<endl;
    else if(y>=r&&y>=t&&y>=u&&y>=i&&y>=o)
        cout<<y<<endl;
    else if(u>=r&&u>=t&&u>=y&&u>=i&&u>=o)
        cout<<u<<endl;
    else if(i>=r&&i>=t&&i>=y&&i>=u&&i>=o)
        cout<<i<<endl;
    else
        cout<<o<<endl;
    return 0;
}
