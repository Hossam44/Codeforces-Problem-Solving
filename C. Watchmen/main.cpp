#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    long long st[200000][2];
    map<long long,long long>arr;
    map<long long,long long>arr1;
    map<pair<long long,long long>,long long>arr2;
    long long n,x,y,total=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        st[i][0]=x;
        st[i][1]=y;
        arr[x]++;
        arr1[y]++;
        arr2[make_pair(x,y)]++;
    }
    for(int i=0;i<n;i++)
    {
        x=st[i][0];
        y=st[i][1];
        total+=arr[x]+arr1[y]-2;
        arr[x]--;
        arr1[y]--;
        total-=arr2[make_pair(x,y)]-1;
        arr2[make_pair(x,y)]--;
    }
    cout<<total;
    return 0;
}
