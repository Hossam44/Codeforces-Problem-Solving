#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <vector>
#include<algorithm>
#include <set>
#include <stdlib.h>

using namespace std;
int main()
{
    int t,n,m,b,k;
    freopen("mosalah.in", "r", stdin);
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d %d", &n, &m, &b, &k);
        int q=(b+k)*n;
        q-=m;
        if(q<=0)
            cout<<"0"<<endl;
        else
        {
            if(k==0)
                cout<<"-1"<<endl;
            else
                cout<<q<<endl;
        }
    }

    return 0;
}
