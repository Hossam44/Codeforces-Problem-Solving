/*
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll arr[100005]={0};

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,n,m=0;
    cin>>t;
    while(t--)
    {
        m=0;
        cin>>n;
        cin>>arr[0];
        for(int i=1;i<n;i++)
        {
            cin>>arr[i];
            if(abs(arr[i]-arr[i-1])%2!=0)
                m=1;
        }
        if(m==1)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }

    return 0;
}
*/



