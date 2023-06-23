#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char arr[30];
    int h=0,n;
    cin>>arr;
    n=strlen(arr);
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='4'||arr[i]=='7')
            h++;
    }
    if(h==4||h==7||h==74||h==47||h==77||h==44)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
