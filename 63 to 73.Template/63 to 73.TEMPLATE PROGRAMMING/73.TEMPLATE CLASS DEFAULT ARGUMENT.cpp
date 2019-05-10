///Template class default argument
#include<iostream>
using namespace std;

template <class T=int, int size=50>
class abc
{
    T x[size];
public:
    void print() {cout<<sizeof(x)<<endl;}
};

int main()
{
    abc<char,7> ob;///1*7
    ob.print();

    abc<> ob1;///Take the value which is set by default.
    ob1.print();
    return 0;
}


