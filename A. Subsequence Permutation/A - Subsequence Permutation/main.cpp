#include <bits/stdc++.h>
using namespace std;
#define lll long long

lll test,n,k,c,m,p=0;
int main()
{

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>test;
    string s,s1;
    while(test--)
    {
        c=0;
        cin>>n;
        cin>>s;
        s1=s;
        sort(s.begin(),s.end());
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s1[i])
                c++;
        }
        cout<<c<<endl;
    }
}
