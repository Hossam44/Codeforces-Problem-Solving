#include <iostream>
#include <string>

using namespace std;

int main()
{
    string si;
    char ar[26];
    int arr[26],q,w,z,x;
    char f,s;
    cin>>q>>w;
    cin>>si;
    for(int i=0;i<26;i++)
    {
        arr[i]=i;
        ar[i]=char(i+'a');
    }
    for(int i=0;i<w;i++)
    {
        cin>>f>>s;
        int temp=arr[f-'a'];
        arr[f-'a']=arr[s-'a'];
        arr[s-'a']=temp;
        char te;
        te=ar[arr[f-'a']];
        ar[arr[f-'a']]=ar[arr[s-'a']];
        ar[arr[s-'a']]=te;
    }
    for(int i=0;i<q;i++)
    {
        si[i]=ar[si[i]-'a'];
    }
    cout<<si;
    return 0;
}
