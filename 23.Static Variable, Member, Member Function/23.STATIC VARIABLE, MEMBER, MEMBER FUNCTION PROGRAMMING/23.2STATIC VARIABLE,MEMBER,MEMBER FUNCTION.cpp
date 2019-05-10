///staic variable, Member, Member function
///If we take static it will not be destroyed until the program will be finished.
///If we declare something in static, it will become 0 by default.
#include<iostream>
using namespace std;

void fun()
{
    static int a;///Here a=0 by default as a is a static variable.
    int b = 0;
    a++;
    b++;
    cout<<a<<" "<<b<<endl;
}

int main()
{
    fun();/// Output 1 1
    fun();///Output 2 1. Because b has become 0 each time. But a has not been declared again, as it is a static variable.


    return 0;
}

