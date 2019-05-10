///staic variable, Member, Member function
///If we take static it will not be destroyed until the program will be finished.
///If we declare something in static, it will become 0 by default.
#include<iostream>
using namespace std;

class abc
{
public:
    static int a;
    int b;
    void fun()
    {
        cout<<++a<<" "<<++b<<endl;
    }
    abc()
    {
        b = 0;
    }
};

int abc::a;///Return type -> class -> scope resulation(::) -> variable.
///If we don't do that it will be undefined.

int main()
{
    abc ob;
    ob.fun();

    return 0;
}

