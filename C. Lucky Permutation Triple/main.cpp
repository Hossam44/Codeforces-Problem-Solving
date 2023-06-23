#include <iostream>

using namespace std;

int main()
{
    int n,arr[100000];
    cin>>n;
    if(n%2==0)
        cout<<"-1";
    else
    {
        for(int i=0;i<n;i++)
        {
            cout<<i<<" ";
            arr[i]=(2*i)+1;
        }
        cout<<endl;
        for(int i=1;i<n;i++)
        {
            cout<<i<<" ";
        }
        cout<<"0"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]%n<<" ";
        }
    }
    return 0;
}
