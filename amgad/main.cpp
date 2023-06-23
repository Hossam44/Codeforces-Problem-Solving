#include <iostream>

using namespace std;
class bank
{
    string name;
    double bal;
 public:
     bank()
     {
         name="no name";
         bal=0;
     }
     bank(string r,double q)
     {
         name=r;
         bal=q;
     }
     void depo(double w)
     {
        bal+=w;
     }
     void withdraw(double w)
     {
        bal-=w;
     }
     void showbal()
     {
         cout<<"Name : "<<name<<endl;
         cout<<"bal : "<<bal<<endl;
     }
};

int main()
{
    bank b2("amgad",12.5);
    b2.depo(950.5);
    b2.withdraw(400.5);
    b2.showbal();

    return 0;
}
