#include <iostream>
#include <string>

using namespace std;

int main()
{
    char arr[101][101],ch,a[10000];
    int n,m,ar[10001],ar1[10001],q=0,s=0,r=0,as[26]={0};
    cin>>n>>m>>ch;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==ch)
            {
                ar[q]=i;
                ar1[q++]=j;
            }
        }
    }
    for(int i=0;i<q;i++)
    {
        if(ar[i]!=0)
        {
            if(arr[ar[i]-1][ar1[i]]!='.' )
                {a[r++]=arr[ar[i]-1][ar1[i]];}
        }
        if(ar[i]!=n-1)
        {
            if(arr[ar[i]+1][ar1[i]]!='.' )
                {a[r++]=arr[ar[i]+1][ar1[i]];}
        }
        if(ar1[i]!=0)
        {
            if(arr[ar[i]][ar1[i]-1]!='.' )
                {a[r++]=arr[ar[i]][ar1[i]-1];}
        }
        if(ar1[i]!=m-1)
        {
            if(arr[ar[i]][ar1[i]+1]!='.' )
                {a[r++]=arr[ar[i]][ar1[i]+1];}
        }
    }
    for(int i=0;i<r;i++)
    {
        if(a[i]!=ch)
        as[a[i]-'A']++;
    }
    s=0;
    for(int i=0;i<26;i++)
    {
        if(as[i]>0)
            s++;
    }
    cout<<s;
    return 0;
}
