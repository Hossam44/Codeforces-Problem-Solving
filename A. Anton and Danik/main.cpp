#include <iostream>

using namespace std;

int main()
{
    int n,m=0,c=0;
    cin>>n;
    char arr[n];
    cin>>arr;
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='A')
            m++;
        else
            c++;
    }
    if(m>c)
        cout<<"Anton"<<endl;
    else if(m<c)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}
