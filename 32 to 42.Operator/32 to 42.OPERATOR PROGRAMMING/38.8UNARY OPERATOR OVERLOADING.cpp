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

    //Number operator ++ (Number ob);///For binary
    //Number operator ++ ();///For unary
    Number operator - (Number ob);
    Number operator - ();
};
/*
Number Number::operator ++ (int a)
{
    Number temp;
    x++;
    y++;
    temp.x = x;
    temp.y = y;
    return temp;
}


Number Number::operator ++ ()
{
    Number temp;
    temp.x = x;
    temp.y = y;
    x++;
    y++;
    return temp;
}
*/
Number Number::operator - (Number ob)
{
    Number temp(x-ob.x, y-ob.y);
    return temp;
}

Number Number::operator - ()
{
    Number temp(-x,-y);
    return temp;
}

int main()
{
    Number n1(4,0),n2(4,4),n3;

    n3.print();
    n3=n1-n2;
    n3.print();
    n3=-n2;
    n3.print();

    return 0;
}


