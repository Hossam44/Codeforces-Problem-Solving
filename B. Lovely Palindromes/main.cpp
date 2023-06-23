#include <iostream>
#include <string>

using namespace std;

int main()
{
    string arr,ss;
    cin>>arr;
    int m=arr.size();
    for(int i=0;i<m;i++)
    {
       cout<<arr[i];
    }
    for(int i=m-1;i>=0;i--)
    {
       cout<<arr[i];
    }
    return 0;
}
