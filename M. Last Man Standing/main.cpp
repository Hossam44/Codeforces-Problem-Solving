
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll arr[200005];
ll sum=0;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,k=-1;
    cin>>n;
    m=n-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
            k=i;
        sum+=arr[i];
    }
    if(sum>n-1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=k;i>=0;i--)
        {
            while(arr[i])
            {
                cout<<i+1<<" "<<m+1<<endl;
                arr[i]--;
                m--;
            }
        }
    }
    return 0;
}
