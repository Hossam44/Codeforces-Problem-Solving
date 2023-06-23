#include <iostream>

using namespace std;

int main()
{
    int n,b;
    cin>>n>>b;
    for(int i=1;i<=n;i++)
    {
        if(i%b==0)
            n++;
    }
    cout<<n<<endl;
    return 0;
}
