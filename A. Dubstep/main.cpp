#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n,q=0,o=0;
    char arr[201];
    char arr1[201];
    cin>>arr;
    n=strlen(arr);
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='W'&&arr[i+1]=='U'&&arr[i+2]=='B')
{
          for(int j=0;j<i;j++)
          {
              if(arr[j]!='W'&&arr[j]!='U'&&arr[j]!='B')
                o++;
          }
          if(o>0)
          {
              if(arr1[q-1]!=char(32))
                  arr1[q++]=char(32);
          }
            i+=2;
}
        else
        {
            arr1[q++]=arr[i];
        }
    }
    for(int i=0;i<q;i++)
    cout<<arr1[i];
    return 0;
}
