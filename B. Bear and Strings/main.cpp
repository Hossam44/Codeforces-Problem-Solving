#include <iostream>
#include <string>

using namespace std;

int main()
{
    string arr;
    int arr0[10000]={0},q=0,k=0;
    cin>>arr;
    int n=arr.size();
    for(int i=0;i<n-3;i++)
    {
        if(arr[i]=='b' && arr[i+1]=='e' && arr[i+2]=='a' && arr[i+3]=='r')
            arr0[q++]=i;
    }
    for(int i=0;i<n-3;i++)
    {
        for(int j=0;j<q;j++)
        {
            if(i<=arr0[j])
            {
                k+=n-(arr0[j]+3);
                break;
            }
        }
    }
    cout<<k;
    return 0;
}
