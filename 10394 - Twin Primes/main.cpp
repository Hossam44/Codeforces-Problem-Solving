#include <iostream>

using namespace std;

int main()
{
    long long arr[100003][2],n;
    arr[1][0]=3;
    arr[1][1]=5;
    for(int i=1;i<100002;i++)
    {
        arr[i+1][0]=(6*i)-1;
        arr[i+1][1]=arr[i+1][0]+2;
    }
    for(int i=0;i<10002;i++)
    {
        cin>>n;
        cout<<"("<<arr[n][0]<<", "<<arr[n][1]<<")"<<endl;
    }
    return 0;
}
