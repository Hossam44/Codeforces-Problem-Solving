#include <iostream>

using namespace std;

int main()
{
    int n,m,b,v,c,u=0;
    cin>>n>>m>>b>>v>>c;
    for(int i=1;i<=c;i++)
    {
        if(i%n==0||i%m==0||i%b==0||i%v==0)
            u++;
    }
    cout<<u;
    return 0;
}
