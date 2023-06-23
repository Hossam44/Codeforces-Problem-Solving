#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    int h,o=0,s,n=0;
    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    s1+=s2;
    h=s1.size();
    s=s3.size();
    if(h==s)
    {
        for(int i=0;i<h;i++)
        {
            o=0; n=0;
            for(int j=0;j<h;j++)
            {
                if(s1[i]==s1[j])
                    o++;
            }
            for(int j=0;j<h;j++)
            {
                if(s1[i]==s3[j])
                    n++;
            }
            if(n!=o)
            {
                cout<<"NO"<<endl;
                exit(0);
            }
        }
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
