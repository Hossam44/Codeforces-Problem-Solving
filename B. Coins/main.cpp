#include <iostream>

using namespace std;

int main()
{
    char arr[3][3];
    int arr1[3];
    arr1[0]=0,arr1[1]=0,arr1[2]=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        if(arr[i][1]=='>')
        {
            arr1[arr[i][0]-'A']++;
        }
        else
        {
            arr1[arr[i][2]-'A']++;
        }
    }
    if(arr1[0]==2)
    {
        if(arr1[1]==1)
            cout<<"C"<<"B"<<"A";
        else
            cout<<"B"<<"C"<<"A";
    }
    else if(arr1[1]==2)
    {
        if(arr1[0]==1)
            cout<<"C"<<"A"<<"B";
        else
            cout<<"A"<<"C"<<"B";
    }
    else if(arr1[2]==2)
    {
        if(arr1[1]==1)
            cout<<"A"<<"B"<<"C";
        else
            cout<<"B"<<"A"<<"C";
    }
    else
        cout<<"Impossible";
    return 0;
}
