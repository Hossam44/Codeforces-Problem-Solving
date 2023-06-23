#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long n,m,arr[100000],q=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        q+=arr[i]*m;
        if(m>1)
            m--;
    }
    cout<<q;
    return 0;
}
