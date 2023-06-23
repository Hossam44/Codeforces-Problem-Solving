#include <iostream>

using namespace std;

int main()
{
    int n,m=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    if(i>=n-3)
       {
         if(m==1)
            m=4;
       }
        if(m==1)
            cout<<"R";
        else if(m==2)
            cout<<"O";
        else if(m==3)
            cout<<"Y";
        else if(m==4)
            cout<<"G";
        else if(m==5)
            cout<<"B";
        else if(m==6)
            cout<<"I";
        else
            cout<<"V";
            m++;
        if(m==8)
            m=1;

    }
    return 0;
}
