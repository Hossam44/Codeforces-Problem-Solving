#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll t,n,a;
vector<int>v;

bool valid(int k)
{
    if(a>=k*2)
    {
        a-=(k*2);
        return 1;
    }
    return 0;
}

void print(int w)
{
    for(int p:v)
    {
        cout<<p;
    }
    if(w==1)
        cout<<a;
    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<v[i];
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>n>>a;
        if(n%2==0)
        {
            if(a&1)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                for(int j=0;j<n/2;j++)
                {
                    for(int i=9;i>=0;i--)
                    {
                        if(valid(i))
                        {
                            v.push_back(i);
                            break;
                        }
                    }
                }
                if(a>0)
                    cout<<"-1"<<endl;
                else
                {
                    print(0);
                }
            }
        }
        else
        {
            if(n>1 && a==1)
            {
                cout<<"-1"<<endl;
                continue;
            }
            for(int j=0;j<n/2;j++)
            {
                for(int i=9;i>=0;i--)
                {
                    if(valid(i))
                    {
                        v.push_back(i);
                        break;
                    }
                }
            }
            if(a>9)
                cout<<"-1"<<endl;
            else
            {
                print(1);
            }
        }
        v.clear();
    }
    return 0;
}
