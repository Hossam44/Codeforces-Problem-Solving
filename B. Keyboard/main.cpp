#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,m,x,z,arr0[58]={0};
    char arr[30][30];
    string arr1;
    cin>>n>>m>>x;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
                arr0[arr[i][j]-'A']++;
                arr0[arr[i][j]-'A'-32]++;
            }
    }
    cin>>z>>arr1;
    for(int i=0;i<z;i++)
    {
        if(arr0[arr1[i]-'A']==0)
        {
            cout<<"-1";
            exit(0);
        }
        if(arr1[i]>='A' &&arr1[i]<='Z')
        {
            if(arr0[18]==0)
            {
                cout<<"-1";
                exit(0);
            }
        }
    }
    return 0;
}
