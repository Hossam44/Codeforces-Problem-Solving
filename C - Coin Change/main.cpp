#include <bits/stdc++.h>

using namespace std;

#define ll long long
ll t,n,m,fin;
int arr[5]={50,25,10,5,1};

ll mem[5][7490];
ll solve(int pos,int sum)
{
    if(sum==0)
        return 1;
    if(pos>=5)
        return 0;
    ll &ret = mem[pos][sum];
    if(~ret) return ret;

    ret = solve(pos+1,sum);
    if(sum>=arr[pos])
        ret+=solve(pos,sum-arr[pos]);
    return ret;
}
/*
//                             false iterative
ll memo[7490];
ll solve1(int sum)
{
    if(sum==0)
        return 1;

    ll &ret = memo[sum];
    if(~ret) return ret;
    ret = 0;
    for(int i=0;i<5;i++)
    {
        if(sum>=arr[i])
            ret+=solve1(sum-arr[i]);
    }
    return ret;
}
ll dp[7490];
ll solve2(int sum)
{
    dp[0]=1;

    for(int s=1;s<7490;s++)
    {
        for(int i=0;i<5;i++)
        {
            if(s>=arr[i])
                dp[s]+=dp[s-arr[i]];
        }
    }
    return dp[sum];
}
*/
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    memset(mem,-1,sizeof(mem));
    memset(memo,-1,sizeof(memo));

    while(cin>>n)
    {
        cout<<solve2(n)<<endl;
    }
    return 0;
}


