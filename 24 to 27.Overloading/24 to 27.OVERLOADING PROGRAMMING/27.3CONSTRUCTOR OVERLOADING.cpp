///Constructor overloading
///Remmeber:Constructor overloading is possible but derstructor overloading is not possible.
#include<iostream>
using namespace std;
class abc
{
    int a;
public:
    abc(int x){a = x;}
    abc(){a = 0;}///As here is no parameter so a = 0.
    abc(int x, int y){a = x+y;}
    int ret(){return a;}
};
int main()
{
    abc ob(5);
    abc ob1;
    abc ob2(67,56);
    cout<<ob.ret()<<endl;
    cout<<ob1.ret()<<endl;
    cout<<ob2.ret()<<endl;
    return 0;
}


