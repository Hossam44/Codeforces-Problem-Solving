 #include <bits/stdc++.h>

using namespace std;
#define ll long long
int t,n,m;

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--)
    {
        int res = 0;
        cin>>n>>m;
        if(n<m)
            swap(n,m);
        if(n==0||m==0)
            cout<<res<<endl;
        else if(n/m>1)
            cout<<m<<endl;
        else{
            while(n!=m)
            {
                if(n-m==1)
                {
                    if(n>1)
                    {
                        res++;
                        n-=2;
                    }
                    break;
                }
                int dif=(n-m)/2;
                n-=(dif*2);
                m-=dif;
                res+=dif;
            }
            res+=(n/3)*2;
            if(n%3==2)
                res++;
            cout<<res<<endl;
        }

    }
    return 0;
}
