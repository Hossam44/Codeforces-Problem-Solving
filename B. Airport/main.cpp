#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,arr[1001]={0},count1=0,count2=0,w=0;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    w=n;
    sort(arr,arr+m);
    for(int i=0;i<m;i++)
    {
        for(int j=arr[i];j>=1;j--)
        {
            if(n>0)
            {
                count1+=j;
                n--;
            }
            else
            {
                break;
            }
        }
        if(n==0)
            break;
    }
    for(int i=m-1;i>=0;i--)
    {
        for(int j=arr[i];j>=1;j--)
        {
            if(w>0)
            {
                count2+=arr[i];
                arr[i]--;
                w--;
                if(arr[i-1]>arr[i] && i!=0)
                    break;
                else if(i==0 && arr[m-1]>=arr[0] && m!=1)
                    {i=m;  break;}
                else if(arr[i]>=arr[i-1] &&i!=m-1)
                    {i=m;  break;}
            }
            else
            {
                break;
            }
        }
        if(w==0)
            break;
    }
    cout<<count2<<" "<<count1;
    return 0;
}
