#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char arr[101];
    int n,m=0,b=0;
    cin>>arr;
    n=strlen(arr);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>='A'&&arr[i]<='Z')
            m++;
        else
            b++;
    }
    if(m>b)
    {
        for(int i=0;i<n;i++)
        {
        if(arr[i]>='a'&&arr[i]<='z')
            arr[i]=char(arr[i]-32);
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
        if(arr[i]>='A'&&arr[i]<='Z')
            arr[i]=char(arr[i]+32);
        }
    }
    cout<<arr;
    return 0;
}
