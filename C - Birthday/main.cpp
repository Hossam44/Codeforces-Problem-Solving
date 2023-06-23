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
    int n,k,w,b=0;
    long long m;
    map<long long,int>c;
    vector<int>keys;
    vector<int>pa(200,-1);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        c[m]++;
    }
    for(pair<int,int>p:c)
    {
        keys.push_back(p.first);
    }
    k=n/2;
    w=k;
    pa[k]=keys[c.size()-1];
    c[keys[c.size()-1]]--;

    for(int i=c.size()-1;i>=0;i--)
    {
        while(c[keys[i]])
        {
            if(b==0)
            {
                pa[--k]=keys[i];
                c[keys[i]]--;
                b=1;
            }
            if(c[keys[i]]==0)
                continue;
            if(b==1)
            {
                pa[++w]=keys[i];
                c[keys[i]]--;
                b=0;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<pa[i]<<" ";
    return 0;
}
