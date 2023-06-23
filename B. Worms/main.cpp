#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int>p;
    int n,m,t=0,q,w;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        t+=m;
        p.resize(t,i);
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>w;
        cout<<p[w-1]<<endl;
    }
    return 0;
}
