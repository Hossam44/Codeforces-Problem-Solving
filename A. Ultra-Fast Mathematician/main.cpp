#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[101];
    char arr1[101];
    cin>>arr;
    cin>>arr1;
    int n=strlen(arr);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr1[i])
            arr[i]='1';
        else
            arr[i]='0';
    }
    cout<<arr;
    return 0;
}
