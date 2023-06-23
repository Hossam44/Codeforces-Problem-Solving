#include <iostream>

using namespace std;

int main()
{
    int n,k=0;
    cin>>n;
    if(n<=5 &&n>0)
        cout<<++k<<endl;
    else
    {
        if(n%5==0)
            cout<<n/5<<endl;
        else
            cout<<(n/5)+1<<endl;
    }
    return 0;
}
