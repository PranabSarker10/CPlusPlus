///Template Class
#include<iostream>
using namespace std;

template <class T>
class Abc
{
    T a;
public:
    Abc() {}
    Abc(T x) {a=x;}

    void set(T x){a=x;}///By using this method we can change the variable at any time.
    T get(){T a;}
    void print(){cout<<a<<endl;}///By using this method we can change the variable at any time.

};
int main()
{
    Abc<int> ob(5);
    ob.print();
    Abc<double> ob1(5.5);
    ob1.print();
    Abc<string> ob2("Proshmita");
    ob2.print();

    Abc<int> ob5(5.5);
    ob5.print();
///Remember: If we declare int but take double value, it will print int.
    return 0;
}

