#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char arr[110];
    char arr1[110],w;
    int e,q,t,m=0;
    cin>>arr;
    cin>>arr1;
    e=strlen(arr1);
    q=strlen(arr);
    t=q-1;
    for(int i=0;i<q;i++)
    {
        if(q/2>i)
        {
            w=arr[i];
            arr[i]=arr[t];
            arr[t]=w;
        }
        t--;
    }
    if(e==q)
    {
      for(int i=0;i<q;i++)
      {
          if(arr[i]!=arr1[i])
            m++;
      }
      if(m==0)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}
