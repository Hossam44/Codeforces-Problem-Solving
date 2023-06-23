#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,arr1[26]={0},count1=0;
    string arr;
    cin>>n;
    cin>>arr;
    if(n>26)
    {
        cout<<"-1";
        exit(0);
    }
    for(int i=0;i<n;i++)
    {
        arr1[arr[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(arr1[i]>1)
        {
            count1+=arr1[i]-1;
        }
    }
    cout<<count1;
    return 0;
}
