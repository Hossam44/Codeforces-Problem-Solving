#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,count1=0,count2=0,q=0;
    cin>>n;
    string arr;
    cin>>arr;
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='(')
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]==')')
                    break;
                if(arr[j]>='A' && arr[j]<='z' && arr[j]!=char(95))
                {
                    count1++;
                    for(int k=j+1;k<n;k++)
                    {
                        if(arr[k]=='_' || arr[k]==')')
                            break;
                        j=k;
                    }
                }
                i=j;
            }
        }
    }


    for(int i=0;i<n;i++)
    {
        count2=0;
        if(arr[i]=='(')
        {
            for(int j=i+1;j<n;j++)
            {
                i=j;
                if(arr[j]==')')
                    break;
            }
        }
        else
        {
            if(arr[i]>='A' && arr[i]<='z' && arr[i]!=char(95))
            {
                count2++;
                for(int k=i+1;k<n;k++)
                {
                    if(arr[k]=='_' || arr[k]=='(')
                        break;
                    count2++;
                    i=k;
                }
            }
        }
        if(count2>q)
            q=count2;
    }

    cout<<q<<" "<<count1;
    return 0;
}
