///Template Class
#include<iostream>
using namespace std;

template <class T1, class T2>
class Abc
{
    T1 a;
    T2 b;
public:
    Abc() {}
    Abc(T1 x, T2 y) {a=x; b=y;}

    void set(T1 x, T2 y){a=x; b=y;}
    T1 geta(){return a;}
    T2 getb(){return b;}
    void print(){cout<<a<<" "<<b<<endl;}///By using this method we can change the variable at any time.
};

int main()
{
    Abc<int,string> ob(1,"name");
    ob.print();

    Abc<int,double> ob1(1,1.5);
    ob1.print();
    return 0;
}



