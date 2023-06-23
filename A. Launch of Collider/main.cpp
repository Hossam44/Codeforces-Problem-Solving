#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long n,arr0[200000],e,q=100000000000;
    int k=1;
    string arr;
    cin>>n;
    cin>>arr;
    for(int i=0;i<n;i++)
    {
        cin>>arr0[i];
    }
    for(int i=0;i<n;i++)
    {
        if(k==1)
        {
            if(arr[i]=='R')
            {
                e=arr0[i];
                k++;
                if(arr[i+1]=='R')
                    k=1;
            }
        }
        else
        {
            if(arr[i]=='L')
            {
                if((arr0[i]-e)<q)
                q=arr0[i]-e;
                k--;
            }
        }
    }
    if(q!=100000000000)
    cout<<q/2;
    else
        cout<<"-1";
    return 0;
}
