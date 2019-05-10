///staic variable, Member, Member function
///If we take static it will not be destroyed until the program will be finished.
///If we declare something in static, it will become 0 by default.
///Static things is not declared again after one declaration. It will not be destroyed until the program is finished. And will start work from first value.
///Static is used to count(like as object).
///Remember: All the member of a static member function should be static.
#include<iostream>
using namespace std;

class abc
{
public:
    static int a;
    static int b;
    static void fun(){ cout<<++a<<" "<<++b<<endl;}
///Remember: All the member of a static member function should be static.
    abc(){ b = 0;}
};

int abc::a;///Return type -> class -> scope resulation(::) -> variable.
///If we don't do that it will be undefined.
int abc::b;

int main()
{
    abc ob,ob1;
    ob.fun();///Here constructor is called. So b = 0++ = 1;
///Remember:Here if constructor is called b will be 0;
    ob.fun();///Here constructor is not called as new object is not created. So b = 1++ = 2.
    ob1.fun();///Here constructor is called. So b = 0++ = 1;
///Remember:As here static value is declared so it will not be changed and will be incremented from the value 0(Here 0 is set by default in static)
    return 0;
}

