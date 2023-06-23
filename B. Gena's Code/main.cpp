#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,t=0,m=0,k=0;
    string arr,a,q,w;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr;
        if(arr[0]=='0')
            k++;
        if(arr.size()!=1 || arr[0]!='1')
{
        if(arr[0]=='1' )
            arr=arr.erase(0,1);
        else
            {a=arr; t++;}
        if(t==0)
        if(arr.find("1")!=-1||arr.find("2")!=-1||arr.find("3")!=-1||arr.find("4")!=-1||arr.find("5")!=-1||arr.find("6")!=-1||arr.find("7")!=-1||arr.find("8")!=-1||arr.find("9")!=-1)
        {
            t++;
            m++;
            a=arr;
        }
        if(m==1)
        {
            w=a;
            a="1";
            a+=w;
            m++;
        }
        if(t!=1)
        {
            q+=arr;
        }
        else
        {
            a+=q;
            q=a;
            t++;
        }
}
    }
    if(k>0)
        cout<<"0";
    else
    {
        if(q[0]=='0')
        {
            w="1";
            w+=q;
            cout<<w;
        }
        else if(q[0]=='\0')
            cout<<"1";
        else
            cout<<q;
    }
    return 0;
}
