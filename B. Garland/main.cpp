#include <iostream>
#include <string>

using namespace std;

int main()
{
    string arr,arr1;
    cin>>arr>>arr1;
    int as[26]={0},as1[26]={0},n,m,t=0,q=0;
    n=arr.size();
    m=arr1.size();
    for(int i=0;i<n;i++)
    {
        as[arr[i]-'a']++;
    }
    for(int i=0;i<m;i++)
    {
        as1[arr1[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(as[i]>=as1[i])
            t+=as1[i];
        else
            t+=as[i];
        if(as1[i]>0 &&as[i]==0)
            q=1;
    }
    if(t==0 || q==1)
        cout<<"-1";
    else
        cout<<t;
    return 0;
}
