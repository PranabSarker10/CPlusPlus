///Logical operator overloading
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

    bool operator && (Number ob);
};

bool Number::operator && (Number ob)
{
    return (x&&y) && (ob.x && ob.y);
}

int main()
{
    Number n1(4,0),n2(4,4),n3;
    if(n1 && n2)
    {
        cout<<"Ok"<<endl;
    }
    else
    {
        cout<<"Error"<<endl;///As in n1 0 is present so after the whole operation we will find 0.
    }
    return 0;
}


