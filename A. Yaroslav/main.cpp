#include <iostream>

using namespace std;

int main()
{
    int m,arr[105],n=0,b=0;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        n=0;
        for(int j=i+1;j<m;j++)
        {
            if(arr[i]==arr[j])
                n++;
        }
        if(b<n)
            b=n+1;

    }
    if(m%2==0)
    {
        if(b>m/2)
            cout<<"NO";
        else
            cout<<"YES";
    }
    else
    {
        if(b>((m/2)+1))
            cout<<"NO";
        else
            cout<<"YES";
    }
    return 0;
}
