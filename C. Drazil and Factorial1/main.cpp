#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,ar[10]={0},m;
    string arr,arr1;
    cin>>n>>arr;
    m=arr.size();
    for(int i=0;i<m;i++)
    {
        if(arr[i]=='4')
            arr1+="322";
        else if(arr[i]=='6')
            arr1+="53";
        else if(arr[i]=='8')
            arr1+="7222";
        else if(arr[i]=='9')
            arr1+="7332";
        else
            arr1+=arr[i];
    }
    n=arr1.size();
    for(int i=0;i<n;i++)
    {
        ar[arr1[i]-'0']++;
    }
    for(int i=9;i>1;i--)
    {
        while(ar[i]!=0)
        {
            cout<<i;
            ar[i]--;
        }
    }
    return 0;
}
