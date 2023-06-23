#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int as[26],ad[26],p=0,k=0,e=0;
    char arr[50001];
    cin>>arr;
    int n=strlen(arr);
    for(int i=0;i<n-25;i++)
    {
    int ar1[26]={0};
    p=0;
    k=0;
        for(int j=i;j<i+26;j++)
        {
            if(arr[j]>='A' && arr[j]<='Z')
                ar1[arr[j]-'A']++;
            else
                as[p++]=j;
        }
        for(int a=0;a<26;a++)
        {
            if(ar1[a]==0)
                ad[k++]=a+'A';
        }
        if(k==p)
        {
            e++;
            for(int v=0;v<p;v++)
            {
                arr[as[v]]=char(ad[v]);
            }
        }
        if(e>0)
            break;
    }
    if(e==0)
        cout<<"-1";
    else
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]=='?')
                cout<<"A";
            else
                cout<<arr[i];
        }
    }
    return 0;
}
