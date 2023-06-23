#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    int n,m=0,e=0,v=0;
    char arr[1002];
    char arr1[1002];
    cin.get(arr,1002);
    n=strlen(arr);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>='a'&&arr[i]<='z')
        {
          arr1[m++]=arr[i];
        }
    }
    for(int i=0;i<m;i++)
    {
        v=0;
        for(int j=i+1;j<m;j++)
        {
            if(arr1[i]==arr1[j])
                v++;
        }
        if(v==0)
        e++;
    }
cout<<e;
return 0;

}
