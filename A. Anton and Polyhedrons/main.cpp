#include <iostream>
#include <string>

using namespace std;

int main()
{
    int m,b=0;
    string arr;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>arr;
        switch(arr[0])
        {
            case 'T': b+=4;
                break;
            case 'I': b+=20;
                break;
            case 'O': b+=8;
                break;
            case 'D': b+=12;
                break;
            case 'C': b+=6;
                break;
        }
    }
    cout<<b;
    return 0;
}
