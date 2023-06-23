#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int>arr;
    deque<int>arr1;
    int n,m,k,w,co=0,q=0;
    cin>>n>>m;
    auto it=arr.end(),it1=arr1.end();
    for(int i=0;i<m;i++)
    {
        cin>>w;
        arr.push_front(w);
    }
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>w;
        arr1.push_front(w);
    }
    w=m;
    it--;it1--;
    m--;
    k--;
    while(1)
    {
        co++;
        q++;
        if(*it>*it1)
        {
            arr.push_front(*it1);
            arr.push_front(*it);
            arr1.pop_back();
            arr.pop_back();
            it=arr.end();it--;
            it1=arr1.end();it1--;
            m++;
            k--;
        }
        else
        {
            arr1.push_front(*it);
            arr1.push_front(*it1);
            arr1.pop_back();
            arr.pop_back();
            it=arr.end();it--;
            it1=arr1.end();it1--;
            m--;
            k++;
        }

        if(q>300)
        {
            cout<<"-1";
            break;
        }
        if(q==0)
        {cout<<"-1"; break;}
        if(k==-1)
        {
            cout<<co<<" 1";
            break;
        }
        else if(m==-1)
        {
            cout<<co<<" 2";
            break;
        }
    }
    return 0;
}
