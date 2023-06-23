
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int arr[200005];
    vector<int>v;
    int n,q;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]==i)
            v.push_back(i);
    }
    q=v.size();
    if(q&1)
    {
        cout<<(q/2)+1<<endl;
    }
    else
    {
        cout<<q/2<<endl;
    }
    for(int i=0;i<q/2;i++)
    {
        cout<<v[i*2]<<" "<<v[(i*2)+1]<<endl;
    }
    if(q&1)
    {
        if(v[q-1]<n)
            cout<<v[q-1]<<" "<<v[q-1]+1<<endl;
        else
            cout<<v[q-1]<<" "<<v[q-1]-1<<endl;
    }
    return 0;
}

