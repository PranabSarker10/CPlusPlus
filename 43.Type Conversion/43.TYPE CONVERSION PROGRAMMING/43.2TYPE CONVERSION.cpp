///Type Conversion
///Type conversion means converting one types two another type.
/**
3 types of conversion is presented.

1.build -> class  n1 = 5.
2.class -> build  int a = n1.
3.class -> class n1 = x1.

*/
#include<iostream>
using namespace std;

class Number
{
    int x,y;///Private member variable
public:
    Number() {x=0; y=0;}///constructor
    Number(int a, int b){x=a; y=b;}///constructor
    void get(int &a,int &b){a=x; b=y;}
    void set(int a, int b){x=a; y=b;}
    void print(){cout<<x<<" "<<y<<endl;}

    friend void operator << (ostream &os, Number ob)
///REMEBER!!!!: WE MUST USE REFERENCE HERE.
    {
        os<<ob.x<<" "<<ob.y<<endl;
    }
};

int main()
{
    Number n1(1,4),n2(2,3),n3;

///Build ->class
    int a;
    n1 = a;///This line shows error . To avoid this constructorshould be called.
///LOOK AT 43.3.
    n1.print();

    return 0;
}



