#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,q=0;
    string arr,str;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a[27]={0},c=0;
        if(i==0)
            getline(cin,arr);
        getline(cin,arr);
        for(int j=0;j<arr.size();j++)
        {
            if(arr[j]>='a' && arr[j]<='z')
            {
                a[arr[j]-'a']++;
                if(a[arr[j]-'a']==1)
                    c++;
            }
        }
        if(c>q)
        {
            str=arr;
            q=c;
        }
    }
    cout<<str<<endl;
    return 0;
}
