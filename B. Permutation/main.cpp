#include <iostream>

using namespace std;

int main()
{
    int n,arr[5001],arr1[5001]={0},count1=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        arr1[arr[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(arr1[i]==0)
            count1++;
    }
    cout<<count1;
    return 0;
}
