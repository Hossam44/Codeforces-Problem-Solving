#include <iostream>

using namespace std;

int main()
{
    int n,arr[100],q=0,z=0,x=0,b=1,o=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        if((arr[0]==3 && o==0) || (arr[i]==3 &&arr[i-1]==0))
        {o++;}
        else if(arr[i]==3)
        {
            b=1,x=0,z=0;
            z=arr[i-1];
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]==0)
                    break;
                if(arr[j]!=3)
                {
                    x=arr[j];
                    i=j;
                    break;
                }
                b++;
            }
            if((x==z && b%2!=0) ||(x!=z && b%2==0 && x!=0))
            {
                if(x==z &&x==1)
                    arr[i-1]=2;
                else if(x==z && x==2)
                    arr[i-1]=1;
                else if(x!=z)
                    arr[i-1]=z;
            }
            else if((x==z && b%2==0) ||(x!=z && b%2!=0 && x!=0))
            {
                if(x==z &&x==1)
                    arr[i-1]=1;
                else if(x==z && x==2)
                    arr[i-1]=2;
                else if(x!=z)
                    arr[i-1]=x;
            }
        }
    }

    if (arr[0]==0)
        q++;
    for(int i=1;i<n;i++)
    {
        if((arr[i]==1 &&arr[i-1]==1) || arr[i]==0)
            q++;
        else if(arr[i]==2 && arr[i-1]==2)
            q++;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<q;
    return 0;
}
