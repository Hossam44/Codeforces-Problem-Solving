#include <iostream>

using namespace std;
long long n,m,q;
bool valid(long long s)
{
    q=(s*m)-(s*(s-1))/2-(s-1);
    if(q>=n)
        return 1;
    return 0;
}
long long Pipline()
{
    long long st=1,en=m-1,mid;
    while(st<en)
    {
        mid=st+(en-st)/2;
        if(valid(mid))
            en=mid;
        else
            st=mid+1;
    }
    return st;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin>>n>>m;
    if(!valid(m-1)){
        cout<<"-1"<<endl;
        return 0;
    }
    if(n==1){
        cout<<"0"<<endl;
        return 0;
    }
    cout<<Pipline()<<endl;

    return 0;
}
