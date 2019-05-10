///Unary operator overloading
#include<iostream>
using namespace std;
class Number
{
    int x,y;
public:
    Number() {x = 0; y = 0;}
    Number(int a, int b) {x = a; y = b;}
    void  get (int &a, int &b){a = x; b = y;}
    void set (int a, int b){x = a; y = b;}
    void print(){cout<<x<<" "<<y<<endl;}

    Number operator ++ ();
    Number operator ++ (int a);
};

Number Number::operator ++ ()
{
    Number temp;
    x++;
    y++;
    temp.x = x;
    temp.y = y;
    return temp;
}


Number Number::operator ++ (int a)
{
    Number temp;
    temp.x = x;
    temp.y = y;
    x++;
    y++;
    return temp;
}

int main()
{
    Number n1(4,0),n2(4,4),n3;

    cout<<"n1 -> before   ";
    n1.print();

    n3 = ++n1;///Pre increment
    cout<<"n1 -> after   ";
    n1.print();

    n3.print();
    return 0;
}

