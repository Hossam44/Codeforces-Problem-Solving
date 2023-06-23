#include <iostream>

using namespace std;

int main()
{
    long long n,arr[100000];
    cin>>n>>arr[0];
    arr[0]-=1;
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
        arr[i]-=1;
        arr[i]+=arr[i-1];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            cout<<"2"<<endl;
        else
            cout<<"1"<<endl;
    }
    return 0;
}
