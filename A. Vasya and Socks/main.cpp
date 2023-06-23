#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(m>n)
    {
        cout<<n<<endl;
    }
    else
    {
       for(int i=1;i<=n;i++)
       {
           if(i%m==0)
            n++;
       }
       cout<<n;
    }
    return 0;
}
