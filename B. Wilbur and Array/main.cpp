#include <iostream>

using namespace std;

int main()
{
    long long n,arr[200002]={0},m=0,count1=0;
    cin>>n>>arr[0];
    if(arr[0]>0)
        count1+=arr[0];
    else
        count1+=(arr[0]*-1);
    for(int i=1;i<n;i++){
        cin>>arr[i];
        if(arr[i]<arr[i-1])
        {
            m=arr[i-1]-arr[i];
            count1+=m;
        }
        else
        {
            m=arr[i]-arr[i-1];
            if(m<0)
                m*=-1;
            count1+=m;
        }
    }
    cout<<count1;
    return 0;
}
