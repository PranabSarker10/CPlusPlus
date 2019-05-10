///Template Class
#include<iostream>
using namespace std;

class Abc
{
    int a;
public:
    Abc() {}
    Abc(int x) {a=x;}

    void set(int x){a=x;}///By using this method we can change the variable at any time.
    int get(){int a;}
    void print(){cout<<a<<endl;}///By using this method we can change the variable at any time.
};

int main()
{
    Abc ob(5);
    ob.print();
    return 0;
}
