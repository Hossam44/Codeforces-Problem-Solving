#include <iostream>

using namespace std;

int main()
{
    int n,m=1;
    long long arr[10000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        m=1;
        if(arr[i]>1000000)
        {
        for(long long j=1;j<=1000000;j++)
          {
            if(arr[i]%j==0)
            {
                m++;
            }
                if(m>3)
                {
                    break;
                }
          }
        }
        else
    {
        for(int j=1;j<=arr[i]/2;j++)
          {
            if(arr[i]%j==0)
                m++;
                if(m>3)
                {
                    break;
                }
          }
    }

        if(m==3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
