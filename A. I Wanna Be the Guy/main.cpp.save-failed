#include <iostream>

using namespace std;

int main()
{
    int n,b=0,c;
    int arr[101];
    int arr1[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
        if(arr[j]==i+1 ||arr1[j]==i+1)
             c++;
        }
        if(c>0)
            b++;
    }
    if(b==n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;

    return 0;
}
