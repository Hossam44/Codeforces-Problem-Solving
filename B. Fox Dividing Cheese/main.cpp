#include <iostream>

using namespace std;

int main()
{
    long long arr[3]={0},arr1[3]={0},n,m,c=0,q=0;
    cin>>n>>m;
     while(1)
     {
         c=0;
         if(n%2==0)
         {
             n/=2;
             arr[0]++;
             c++;
         }
         else if(n%3==0)
         {
             n/=3;
             arr[1]++;
             c++;
         }
         else if(n%5==0)
         {
             n/=5;
             arr[2]++;
             c++;
         }
         if(m%2==0)
         {
             m/=2;
             arr1[0]++;
             c++;
         }
         else if(m%3==0)
         {
             m/=3;
             arr1[1]++;
             c++;
         }
         else if(m%5==0)
         {
             m/=5;
             arr1[2]++;
             c++;
         }
         if(c==0)
         {
             if(n==m)
                {break;}
             else
                {cout<<"-1"; exit(0);}
         }
     }
     for(int i=0;i<3;i++)
     {
         m=arr[i]-arr1[i];
         if(m<0)
            m*=-1;
         q+=m;
     }
     cout<<q;
    return 0;
}
