#include <iostream>
#include <string>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,q,count0=0;
    string arr[101],arr1;
    deque <int>as(101,0),as1(101,0),as2(101,0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        cin>>arr[i];
        for(int j=0;j<m;j++)
        {
            cin>>arr1;
            if(arr1[0]==arr1[1]&&arr1[0]==arr1[3]&&arr1[0]==arr1[4]&&arr1[0]==arr1[6]&&arr1[0]==arr1[7])
                as[i]++;
            if(arr1[0]>arr1[1]&&arr1[1]>arr1[3]&&arr1[3]>arr1[4]&&arr1[4]>arr1[6]&&arr1[6]>arr1[7])
                as1[i]++;
        }
        as2[i]=m-(as[i]+as1[i]);
    }
    cout<<"If you want to call a taxi, you should call: ";
    q=*max_element(as.begin(),as.end());
    for(int i=0;i<n;i++)
    {
        if(as[i]==q)
        {
            count0++;
            if(count0>1)
                cout<<", "<<arr[i];
            else
                cout<<arr[i];
        }
    }
    cout<<"."<<endl;
    count0=0;
    cout<<"If you want to order a pizza, you should call: ";
    q=*max_element(as1.begin(),as1.end());
    for(int i=0;i<n;i++)
    {
        if(as1[i]==q)
        {
            count0++;
            if(count0>1)
                cout<<", "<<arr[i];
            else
                cout<<arr[i];
        }
    }

    cout<<"."<<endl;
    count0=0;
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    q=*max_element(as2.begin(),as2.end());
    for(int i=0;i<n;i++)
    {
        if(as2[i]==q)
        {
            count0++;
            if(count0>1)
                cout<<", "<<arr[i];
            else
                cout<<arr[i];
        }
    }
    cout<<"."<<endl;
    return 0;
}
