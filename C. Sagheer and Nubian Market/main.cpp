#include <bits/stdc++.h>

using namespace std;
long long n,m,sum,c;
long long arr[100005],arr1[100005];
bool valid(long long s)
{
    c=0;
    for(int i=0;i<n;i++)
    {
        arr1[i]=arr[i]+ (long long)(i+1)*s;
    }
    sort(arr1,arr1+n);
    for(int i=0;i<s;i++)
        c+=arr1[i];

    if(c<=m)
    {
        sum=c;
        return 1;
    }
    return 0;
}
long long bin()
{
    long long st=0,en=n,mid;
    while(st<en)
    {
        mid=st+(en-st+1)/2;
        if(valid(mid))
            st=mid;
        else
            en=mid-1;
    }
    return st;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    long long s=bin();
    cout<<s<<" "<<sum;
    return 0;
}
