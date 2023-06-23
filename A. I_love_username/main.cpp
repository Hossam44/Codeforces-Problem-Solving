#include <iostream>

using namespace std;

int main()
{
    int p,n,m,c=0;
    int arr[1000];
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>arr[i];
    }
    n=arr[0];
    m=arr[0];
    for(int i=1;i<p;i++)
    {
        if(arr[i]>n)
        {
            n=arr[i];
            c++;
        }
        if(arr[i]<m)
        {
            m=arr[i];
            c++;
        }
    }
    cout<<endl<<c;
    return 0;
}
