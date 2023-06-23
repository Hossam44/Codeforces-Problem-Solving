#include <iostream>
#include <string>

using namespace std;
void convert(string s,int &y,int &m,int &d)
{
    y=(s[0]-48)*1000;
    y+=(s[1]-48)*100;
    y+=(s[2]-48)*10;
    y+=(s[3]-48);
    m=(s[5]-48)*10;
    m+=(s[6]-48);
    d=(s[8]-48)*10;
    d+=(s[9]-48);
}
void Replace(int &t,int &t1)
{
    int temp=t;
    t=t1;
    t1=temp;
}
bool leab(int y)
{
    if(y%400==0)
        return 1;
    else if(y%100==0)
        return 0;
    else if(y%4==0)
        return 1;
    else
        return 0;
}
int main()
{
    string s1,s2;
    int y=0,m=0,d=0,y1=0,m1=0,d1=0,q,n;
    int arr[]={0,0,31,59,90,120,151,181,212,243,273,304,334};
    cin>>s1>>s2;
    convert(s1,y,m,d);
    convert(s2,y1,m1,d1);
    q=(y*365)+(m*30)+d;
    n=(y1*365)+(m1*30)+d1;
    if(q>n)
    {
        Replace(y,y1);
        Replace(m,m1);
        Replace(d,d1);
    }
    if(y==y1)
    {
        if(m!=m1)
        {
            if(leab(y))
            {
                if(m>2)
                    arr[m]++;
                if(m1>2)
                    arr[m1]++;
                cout<<((arr[m1]+d1)-(arr[m]+d));
            }
            else
            {
                cout<<((arr[m1]+d1)-(arr[m]+d));
            }
        }
        else if(m==m1&&d==d1)
        {
            cout<<"0";
        }
        else
        {
            cout<<d1-d;
        }

    }
    else{
    q=0;
    for(int i=y+1;i<y1;i++)
    {
        if(leab(i))
            q+=366;
        else
            q+=365;
    }
    if(leab(y))
    {
        if(m>2)
            q+=366-arr[m]-d-1;
        else
            q+=366-arr[m]-d;
    }
    else
    {
        q+=365-arr[m]-d;
    }
    if(leab(y1))
    {
        if(m1>2)
            q+=arr[m1]+d1+1;
        else
            q+=arr[m1]+d1;
    }
    else
    {
        q+=arr[m1]+d1;
    }
    cout<<q;
    }

}
