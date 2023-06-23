#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int arr[4],tempe,m=0,y=0;
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<4;i++)
    {
      for(int j=i+1;j<4;j++)
      {
          if(arr[i]>arr[j])
          {
              tempe=arr[i];
              arr[i]=arr[j];
              arr[j]=tempe;
          }
      }
    }
    int k=0;
     if(arr[0]%arr[1]==0)
     {
         cout<<arr[0]/arr[1];
         exit(0);
     }
     if(arr[0]%arr[2]==0){
         tempe=arr[0]/arr[2];
         for(int i=0;i<tempe;i++)
         {
             if(arr[0]%arr[1]!=0)
             {
                 arr[0]-=arr[2];
                 k++;
             }
             if(arr[0]%arr[1]==0)
             {
                 k+=arr[0]/arr[1];
                 break;
             }
         }}
         else
            {
         tempe=arr[0]/arr[2];
         for(int i=0;i<tempe;i++)
         {
             if(arr[0]%arr[1]!=0)
             {
                 arr[0]-=arr[2];
                 k++;
             }
             if(arr[0]%arr[1]==0)
             {
                 y++;
                 k+=arr[0]/arr[1];
                 break;
             }

         }
         if(y==0)
         {
             k=0;
         }
         }
         if(arr[0]%arr[3]==0){
         tempe=arr[0]/arr[3];
         for(int i=0;i<tempe;i++)
         {
             if(arr[0]%arr[1]!=0)
             {
                 arr[0]-=arr[3];
                 m++;
             }
             if(arr[0]%arr[1]==0)
             {
                 m+=arr[0]/arr[1];
                 break;
             }
         }}
        else
            {
                y=0;
         tempe=arr[0]/arr[3];
         for(int i=0;i<tempe;i++)
         {
             if(arr[0]%arr[1]!=0)
             {
                 arr[0]-=arr[3];
                 m++;
             }
             if(arr[0]%arr[1]==0)
             {
                 y++;
                 m+=arr[0]/arr[1];
                 break;
             }

         }
         if(y==0)
         {
             m=0;
         }

         }

    cout<<k<<endl;

    cout<<m;


        return 0;
}
