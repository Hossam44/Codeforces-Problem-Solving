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
    int n,m;
    long long j=2000000000,k;
    int arr[2]={1,-1};
    map<long long,long long>x;
    map<long long,long long>z;
    map<long long,long long>y;

    queue<long long>qu;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        x[k]=1;
        qu.push(k);
    }
    k=0;
    while(m)
    {
        int t=qu.front();
        qu.pop();
        for(int i=0;i<2;i++)
        {
            int r=t+arr[i];
            if(x[r]==0 && r<=j && r>=(-1*j))
            {
                if(z[r]==0)
                {
                    z[r]=z[t]+1;
                    y[r]=z[r];
                    k+=z[r];
                    qu.push(r);
                    m--;
                    if(m==0)
                        break;
                }
            }
        }
    }
    cout<<k<<endl;
    for(pair<long long,long long>w : y)
        cout<<w.first<<" ";
    return 0;
}
