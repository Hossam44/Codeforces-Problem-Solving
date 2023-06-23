#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string,int>arr;
    string arr2;
    int n,k=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr2;
        if(arr[arr2]==0)
        {
            arr[arr2]=k;
            cout<<"OK"<<endl;
        }
        else
        {
            arr[arr2]++;
            cout<<arr2<<arr[arr2]-1<<endl;
        }
    }
    return 0;
}
