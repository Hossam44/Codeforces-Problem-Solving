#include <iostream>

using namespace std;

int main()
{
    double n,arr[1003]={0},x,y,a,s,q,w;
    int k=0,f=0,p=0;
    cin>>n>>x>>y;
    for(int i=0;i<n;i++)
    {
        p=0;
        cin>>a>>s;
        if(a==x)
            arr[1001]=1;
        else
     {
         w=s-y;
         q=a-x;
        for(int j=0;j<k;j++)
        {
            if((w/q)==arr[j])
               {p++; break;}
        }
        if(p==0)
             {
                arr[k++]=(w/q);
                f++;
             }
     }
    }
    if(arr[1001]==1)
        {f++;}
        cout<<f;
    return 0;
}
