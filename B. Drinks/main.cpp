#include <iostream>

using namespace std;

int main()
{
    double n,m,t=0.0;
    double arr[101];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    m=100.0/n;
    for(int i=0;i<n;i++)
    {
        t+=arr[i]*m/100.0;
    }
    cout<<t<<endl;
    return 0;
}
