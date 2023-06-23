#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string arr,arr1;
    cin>>arr;
    arr1=arr;
    long long int n=arr.size(),q=1,m=0;
    if (arr[0]=='>')
        arr1="1000";
    else if(arr[0]=='<')
        arr1="1001";
    else if(arr[0]=='+')
        arr1="1010";
    else if(arr[0]=='-')
        arr1="1011";
    else if(arr[0]=='.')
        arr1="1100";
    else if(arr[0]==',')
        arr1="1101";
    else if(arr[0]=='[')
        arr1="1110";
    else if(arr[0]==']')
        arr1="1111";
    for(int i=1;i<n;i++)
    {
    if (arr[i]=='>')
        arr1+="1000";
    else if(arr[i]=='<')
        arr1+="1001";
    else if(arr[i]=='+')
        arr1+="1010";
    else if(arr[i]=='-')
        arr1+="1011";
    else if(arr[i]=='.')
        arr1+="1100";
    else if(arr[i]==',')
        arr1+="1101";
    else if(arr[i]=='[')
        arr1+="1110";
    else if(arr[i]==']')
        arr1+="1111";
    }
    for(int i=(n*4)-1;i>=0;i--)
    {
        if(arr1[i]=='1')
        {
            m+=q;
            m=m%1000003;
        }
        q*=2;
        q=q%1000003;
    }

    cout<<m%1000003;
    return 0;
}
