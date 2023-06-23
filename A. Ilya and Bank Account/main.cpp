#include <iostream>

using namespace std;

int main()
{
    int n,m,o=0,arr[10];
    cin>>n;
    if(n>=0)
    m=n;
    else
    m=n*-1;
    for(int i=0;i<=10;i++)
    {
        if(m>=10)
        {
           m/=10;
        }
        else
        {
            o=i;
            break;
        }
    }
    if(n>=0)
        cout<<n;
    else{
        m=n*-1;
        for(int i=o;i>=0;i--)
        {
            arr[i]=m%10;
            m/=10;
        }
        if(arr[o-1]>arr[o])
        {
            if(o==1 && arr[o]==0){}
            else{
            cout<<"-";}
            for(int j=0;j<=o;j++)
            {
                if(j!=o-1)
                {
                    cout<<arr[j];
                }
            }
        }
        else
        {
            cout<<"-";
            for(int j=0;j<o;j++)
            {
                cout<<arr[j];
            }
        }
    }

    return 0;
}
