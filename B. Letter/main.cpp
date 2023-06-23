#include <iostream>
#include <string>

using namespace std;

int main()
{
    string arr,arr1;
    int n,m,ar[60]={0},ar1[60]={0},count1=0;
    getline(cin,arr);
    getline(cin,arr1);
    n=arr.size();
    m=arr1.size();
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=' ')
        ar[arr[i]-'A']++;
    }
    for(int i=0;i<m;i++)
    {
        if(arr1[i]!=' ')
        ar1[arr1[i]-'A']++;
    }
    for(int i=0;i<60;i++)
    {
        if(ar1[i]>ar[i])
            count1++;
    }
    if(count1>0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
