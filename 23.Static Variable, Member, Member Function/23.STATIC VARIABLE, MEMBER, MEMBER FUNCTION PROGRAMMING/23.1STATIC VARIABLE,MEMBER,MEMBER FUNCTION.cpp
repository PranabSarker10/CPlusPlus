///staic variable, Member, Member function
///If we take static it will not be destroyed until the program will be finished.
///If we declare something in static, it will become 0 by default.
#include<iostream>
using namespace std;

void fun()
{
    static int a;
    int b = 0;
    a++;
    b++;
    cout<<a<<" "<<b<<endl;
}

int main()
{
    fun();

    return 0;
}
