
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
vector<string>v(200005);
int arr[200005]={0};

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,a,b;
    cin>>n;
    cout<<n<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        arr[a]=arr[b]+1;
        v[a]=v[b];
    }
    for(int i=0;i<arr[1];i++)
    {
        cout<<"I_love_";
    }
    cout<<v[1];

    return 0;
}

