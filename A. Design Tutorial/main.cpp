#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,m=0,k=0;
    cin>>n;
    for(int i=4;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            m=0;
            k=0;
            if(i+j==n)
            {
                for(int y=2;y<i;y++)
                {
                    if(i%y==0)
                        m++;
                }
                for(int b=2;b<j;b++)
                {
                    if(j%b==0)
                        k++;
                }
            }
            if(m>0 && k>0)
                {
                    cout<<i<<" "<<j<<endl;
                    exit(0);
                }

        }
    }
    return 0;
}
