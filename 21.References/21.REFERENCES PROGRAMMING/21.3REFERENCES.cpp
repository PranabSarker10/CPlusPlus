///References:It works like as pointer. But (->) sign is not used. (.) sign is used.
///Reference works to pass value and declare object in class.
///Remember: Here we can send variable(which has address) not value.
#include<iostream>
using namespace std;

int& fun (int a)
{
    return a;
}

int main()
{
    int a;
    a = 5;

    int *p = &a;

    int& r = *p;

    r = 5;
    fun(a) = 6;


    return 0;
}
