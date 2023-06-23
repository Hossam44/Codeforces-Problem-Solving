#include <iostream>

using namespace std;

int main()
{
    int t,n,c;
    long long k;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if((n/2)%2==0)
        {
            cout<<"YES"<<endl;
            c=1;
            k=1;
            while(c!=(n/2)+1)
            {
                if((k*2)%6!=0)
                    {cout<<k*2<<" "; c++;}
                k++;
            }
            c=1;
            k=1;
            cout<<k<<" ";
            while(c!=n/2)
            {
                if(c%2==0)
                    k+=2;
                else
                    k+=4;
                cout<<k<<" ";
                c++;
            }
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
