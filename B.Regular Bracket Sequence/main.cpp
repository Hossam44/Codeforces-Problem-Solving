#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char arr[1000000];
    cin>>arr;
    int m=strlen(arr),n=1,p=0,a=0;
    for(int i=0;i<m;i++)
  {
    if(arr[i]=='(')
    {
        a++;
    }
    if(a>0)
    {
        if(arr[i]==')')
        {
            p++;
            a--;
        }
    }

  }
    cout<<p*2;
    return 0;
}
