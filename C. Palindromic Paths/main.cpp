#include <bits/stdc++.h>

using namespace std;
#define ll long long
int t,n,m;

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    int arr[35][35],res;
    for(int i=0;i<t;i++)
    {
        res = 0;
        map<pair<int,int>,int>ma,ma1;
        cin>>n>>m;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
                cin>>arr[j][k];
        }
        for(int j=0;j<(m+n-1)/2;j++)
        {
            int c = j-(m-1);
            if(c<0)
                c=0;
            for(int k=0;k<=min(j,min(m-1,n-1));k++)
            {
                ma[{j,arr[c+k][min(j,m-1)-k]}]++;
            }
        }

        for(int j=0;j<(m+n-1)/2;j++)
        {
            int c = j-(n-1);
            if(c<0)
                c=0;
            for(int k=0;k<=min(j,min(m-1,n-1));k++)
            {
                ma1[{j,arr[n-1+k-min(j,n-1)][m-1-k-c]}]++;
            }
        }


        for(int j=0;j<(m+n-1)/2;j++)
        {
            int q = ma[{j,0}]+ma1[{j,0}];
            int e = ma[{j,1}]+ma1[{j,1}];
            (q>e)? res+=e : res+=q;
        }
        cout<<res<<endl;
    }
    return 0;
}
