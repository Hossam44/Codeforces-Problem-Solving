#include <iostream>

using namespace std;

int main()
{
    int n,m,c=0;
    int arr[1000];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=m)
            c++;
        else
            c+=2;
    }
    cout<<c<<endl;
    return 0;
}
