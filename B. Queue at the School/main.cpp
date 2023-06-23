#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    int n,m;
    string arr;
    cin>>n>>m;
    cin>>arr;
    for(int i=0;i<m;i++)
    {
        for(int j=n-1;j>0;j--)
        {
            if(arr[j]=='G'&&arr[j-1]=='B')
            {
                swap(arr[j],arr[j-1]);
                j--;
            }
        }
    }
    cout<<arr;
    return 0;
}
