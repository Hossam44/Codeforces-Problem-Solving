#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    char arr[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
            cin>>arr[i][j];
    }
    for(int i=0;i<3;i++)
    {
        int w;
        for(int j=0;j<3;j++)
        {
            w=0;
            if(arr[i][j]=='#')
                w++;
            if(arr[i][j+1]=='#')
                w++;
            if(arr[i+1][j]=='#')
                w++;
            if(arr[i+1][j+1]=='#')
                w++;

        if(w==3||w==1||w==4||w==0)
            {
            cout<<"YES";
            exit(0);
            }
        }
    }
    cout<<"NO";
    return 0;
}
