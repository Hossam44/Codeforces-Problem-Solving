#include <iostream>

using namespace std;

int main()
{
    long long int n,m,w,a,b,arr[100001];
    cin>>n>>m>>w;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        b=(m*a)%w;
        arr[i]=b/m;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
