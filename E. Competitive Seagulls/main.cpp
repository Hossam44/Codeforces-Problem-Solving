#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
            cout<<"first"<<endl;
        if(n<3)
            cout<<"second"<<endl;
        else
            cout<<"first"<<endl;
    }
    return 0;
}
