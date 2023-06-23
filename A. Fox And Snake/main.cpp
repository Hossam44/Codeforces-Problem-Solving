#include <iostream>

using namespace std;

int main()
{
    int n,m;
    char arr[51][51];
    cin>>n>>m;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i%2==0)
            arr[i][j]='#';
            else
            {
                if(j!=m-1)
                   arr[i][j]='.';
                else
                   arr[i][j]='#';
            }
        }
    }
    char ch;
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<m;j++)
        {
            if(i%2==0)
            cout<<arr[0][j];
            else
            cout<<arr[1][j];
        }
        cout<<endl;
        if(i%2!=0)
            {
            ch=arr[1][m-1];
            arr[1][m-1]=arr[1][0];
            arr[1][0]=ch;
    }
    }
    return 0;
}
