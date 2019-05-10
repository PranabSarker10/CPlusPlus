///Binary operator overloading
#include<iostream>
using namespace std;
class Number
{
    int x,y;///private member variable
public:
    Number() {x = 0; y = 0;}///Constructor
    Number(int a, int b) {x = a; y = b;}///Constructor
    void  get (int &a, int &b){a = x; b = y;}///Here we give the references of the variables as we don't return two parameters simultaneously in a function.
///Here it will be assigned in our given variables.
    void set (int a, int b){x = a; y = b;}
    void print(){cout<<x<<" "<<y<<endl;}
    Number operator + (Number ob);///The class of the 2nd parameter should be written here.
///Here function is declared.
};
///Remember:In operator overloading, one operand will be pass by default.
Number Number::operator + (Number ob)
{
    Number temp;
 /**
 temp.x = x(n1)+ob.x(n2);
 temp.y = y(n1)+ob.y(n2);
 */
    temp.x = x+ob.x;
    temp.y = y+ob.y;

    return temp;///Here temp is n3.
}

int main()
{
    Number n1(5,6),n2(7,8),n3;///Here 5+7=12 and 6+8=14 will be printed
    n3 = n1 + n2;
///In binary operator overloading, the left-sided operand will be pass by default and the right-sided operand will go as a parameter.
    n3.print();
    return 0;
}
