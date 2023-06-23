#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unordered_map<string,double>m;
    int t,a,s;
    string arr;
    long double d,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        m["JD"]=1;
        cin>>a>>s;
        for(int i=0;i<a;i++)
        {
            cin>>arr>>d;
            m[arr]=d;
        }
        for(int i=0;i<s;i++)
        {
            cin>>d>>arr;
            sum+=d*m[arr];
        }
        cout<<fixed<<setprecision(6)<<sum<<endl;
        m.clear();
    }
    return 0;
}
