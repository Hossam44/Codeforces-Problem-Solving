#include <iostream>

using namespace std;

int main()
{
    int t,n;
    long long a,tem=0;
    long long sum=0;
    bool pos=false;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        sum=0;
        tem=0;
        cin>>a;
        tem=a;
        if(a>0)
            pos=true;
        else
            pos=false;
        for(int i=0;i<n-1;i++)
        {
            cin>>a;
            if(pos==true && a>0)
            {
                if(a>tem)
                    tem=a;
            }
            else if(pos==true && a<0)
            {
                sum+=tem;
                tem=a;
                pos=false;
            }
            else if(pos==false && a<0)
            {
                if(a>tem)
                    tem=a;
            }
            else if(pos==false && a>0)
            {
                sum+=tem;
                tem=a;
                pos=true;
            }
        }
        sum+=tem;
        cout<<sum<<endl;
    }
    return 0;
}
