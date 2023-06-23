#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;
int main()
{
    int n,m=0;
    char arr[101];
    cin>>n;
    cin>>arr;
    n=strlen(arr);
    if(n<26)
    {
        cout<<"NO"<<endl;
        exit(0);
    }
    for(int i=65;i<91;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(char(i)==arr[j] ||char(i+32)==arr[j])
            {
                m++;
                break;
            }
        }
    }
    if(m==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
