///Random Topics Conversion Function
///By conversion function, we can convert a class into another type.
#include<iostream>
using namespace std;

class abc
{
public:
    int x;
    int y;

    abc(int a,int b) {x=a; y=b;}

    operator int() {return x+y;}
};

int main()
{
    abc ob(1,2);///Here the object is convert in integer.
    int a = ob;
    cout<<a<<endl;
    return 0;
}
