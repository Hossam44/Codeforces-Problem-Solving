#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t,n,k,arr[200005],arr1[400005]={0},arr2[200005]={0},y=0,z=0,total=0,m,x=0,g,h,r=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        z=0;
        y=0;
        r=0;
        set<pair<int,int>>sa;
        total=0;
        h=1000000;
        cin>>n>>k;
        for(int j=1;j<=n;j++)
        {
            cin>>arr[j];
            if(j>n/2)
            {
                arr1[arr[j]+arr[n-j+1]]++;
                if(arr1[arr[j]+arr[n-j+1]]==1)
                    arr2[x++]=arr[j]+arr[n-j+1];
                if(arr[j]+arr[n-j+1]!=k+1)
                    r++;
            }
        }
        for(int q=0;q<x;q++)
        {
            sa.emplace(make_pair(arr1[arr2[q]],arr2[q]));
        }
        pair<int,int>ar;
        ar=*sa.begin();
        g=ar.first;
        while(!sa.empty())
        {
            ar=*sa.begin();
            y=ar.second;
            sa.erase(ar);
            total=0;
            if(ar.first<=g/2)
                break;
            for(int q=1;q<=n/2;q++)
            {
                if(arr[q]+arr[n-q+1]>y)
                {
                    m=arr[q]+arr[n-q+1];
                    z=max(arr[q],arr[n-q+1]);
                    m=m-y;
                    if(z-m>=1)
                        total+=1;
                    else
                        total+=2;
                }
                else if(arr[q]+arr[n-q+1]<y)
                {
                    m=arr[q]+arr[n-q+1];
                    z=min(arr[q],arr[n-q+1]);
                    m=y-m;
                    if(k-z>=m)
                        total+=1;
                    else
                        total+=2;
                }
            }
            if(total<h)
                {h=total;}
        }
        cout<<min(h,r)<<endl;
    }
    return 0;
}
