#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string arr,arr1;
    cin>>arr;
    int n=arr.size(),k=0;
    for(int i=0;i<1000;i+=8)
    {
        arr1=to_string(i);
        k=0;
        for(int j=0;j<n;j++)
        {
            if(arr1[k]==arr[j])
                k++;
        }
        if(k==1 && i<=8)
            {cout<<"YES"<<endl<<i; exit(0);}
        else if(k==2 && i<100)
            {cout<<"YES"<<endl<<i; exit(0);}
        else if(k==3)
            {cout<<"YES"<<endl<<i; exit(0);}
    }
    cout<<"NO";
    return 0;
}
