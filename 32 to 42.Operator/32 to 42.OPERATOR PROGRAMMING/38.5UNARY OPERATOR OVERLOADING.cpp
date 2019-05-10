///Unary operator overloading
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

    Number operator ++ (int a);
};

Number Number::operator ++ (int a)
{
    Number temp;
    x++;
    y++;
    temp.x = x;
    temp.y = y;
    return temp;
}
///Remember: If we want to assign something then the void will show error. This time we need to use the returntype. Example is availabe in 38.3.
int main()
{
    Number n1(4,0),n2(4,4),n3;

    cout<<"n1 -> before";
    n1.print();

    n3 = n1++;///Here somthing is assigned.
    cout<<"n1 -> after";///As in n1 0 is present so after the whole operation we will find 0.
    n1.print();

    n3.print();
///Now Problem is: The values of n1.print() and n3.print() are equal.
    return 0;
}
