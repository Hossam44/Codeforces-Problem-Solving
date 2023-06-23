#include <iostream>

using namespace std;

int main()
{
    int arr[101],n,m=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
            m++;
    }
    if(m>=1)
        cout<<"HARD";
    else
        cout<<"EASY";
    return 0;
}
