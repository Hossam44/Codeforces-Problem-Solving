#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n>=m)
            cout<<"FunkyMonkeys"<<endl;
        else
            cout<<"WeWillEatYou"<<endl;
    }
    return 0;
}
