#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long n,m,t=2;
    int q;

    vector<pair<long long,long long>>ma(100000);
    cin>>q;
    if(q==1)
        t=1;
    for(int i=0;i<q;i++)
    {
        cin>>n>>m;
        ma[i].first=n;
        ma[i].second=m;
    }
    for(int i=1;i<q-1;i++)
    {
        if((ma[i].first-ma[i].second)>ma[i-1].first)
        {
            t++;
        }
        else if((ma[i].first+ma[i].second)<(ma[i+1].first))
        {
            t++;
            ma[i].first=(ma[i].first+ma[i].second);
        }
    }
    cout<<t;
    ma.shrink_to_fit();
    return 0;
}
