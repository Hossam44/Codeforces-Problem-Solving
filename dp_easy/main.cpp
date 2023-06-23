#include <bits/stdc++.h>

using namespace std;

#define ll long long
ll t,n,m,fin;
int arr[10005];
ll mem[10005];
ll solve(int pos)
{
    if(pos>=n)
        return 0;
    ll& ret = mem[pos];
    if(~ret) return ret;

    ret = solve(pos+2)+arr[pos];
    ret = max(ret,solve(pos+1));
    return ret;

}
ll dp[10005];
ll solve_iterative()
{
    dp[0]=arr[0];
    dp[1]=max(arr[0],arr[1]);
    for(int i=2;i<n;i++)
    {
        ll fir=dp[i-2]+arr[i];
        ll second = dp[i-1];
        dp[i]=max(fir,second);
    }
    return dp[n-1];
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin>>t;
    for(int Case=1;Case<=t;Case++){
        memset(mem,-1,sizeof mem);
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Case "<<Case<<": "<<solve_iterative()<<endl;
    }
    return 0;
}
