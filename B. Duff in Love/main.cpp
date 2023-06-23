#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<long long ,short>arr;
    for(int i=2;i<125000;i++)
    {
        arr[i*i]=1;
    }
    return 0;
}
