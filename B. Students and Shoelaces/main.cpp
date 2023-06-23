#include <iostream>

using namespace std;

int main()
{
    int n,m,arr[10000],arr1[10000]={0};
    cin>>n>>m;
    for(int i=1;i<=m*2;i++)
    {
        cin>>arr[i];
        arr1[arr[i]]++;
    }
    for(int i=1;i<=m*2;i++)
    {
        if(arr1[arr[i]])
    }
    return 0;
}
