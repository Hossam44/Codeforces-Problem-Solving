#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,arr[1001]={0},b=0,count1=0,p=0,z=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    while(p!=n){
            b=0; p=0; z=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=b && arr[i]!=m)
        {
            b=arr[i];
            arr[i]++;
            if(z==0)
            {count1++; z++;}
        }
        if(arr[i]==m)
            p++;
    }
    sort(arr,arr+n);
    }
    cout<<count1;
    return 0;
}
