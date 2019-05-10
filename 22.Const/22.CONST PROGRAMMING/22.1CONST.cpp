///Const: Here we can keep a value like as constant.
///If we declare const(must have a value) than in the whole program I cannot change it.
#include<iostream>
using namespace std;
int main()
{
    const int constant = 123;///We cannot change it.(It works like as define)
    constant = 3;
///As const is unchangeable so constant = 3 will show error.

    return 0;
}
