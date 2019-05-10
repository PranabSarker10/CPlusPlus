///Relational operator overloading
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
    bool operator > (Number ob);///In realtional operator overloading, funtion type will be bool type.
    bool operator < (Number ob);
    bool operator == (Number ob);
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

bool Number::operator > (Number ob)
{
    return (x+y) > (ob.x + ob.y);
}

bool Number::operator < (Number ob)
{
    return (x+y) < (ob.x + ob.y);
}

bool Number::operator == (Number ob)
{
    return (x+y) == (ob.x + ob.y);
}

int main()
{
    Number n1(4,4),n2(4,4),n3;
/**           ^ ^     ^ ^
              | |     | |
              - ^     - ^  =>4+4=8
                |       |
                -       -  =>4+4=8
**/
    n3 = n1 + n2;
    n3.print();

    if(n1>n2)
        cout<<"n1"<<endl;
    else if(n1==n2)
        cout<<"n1=n2"<<endl;
    else
        cout<<"n2"<<endl;
    return 0;
}

