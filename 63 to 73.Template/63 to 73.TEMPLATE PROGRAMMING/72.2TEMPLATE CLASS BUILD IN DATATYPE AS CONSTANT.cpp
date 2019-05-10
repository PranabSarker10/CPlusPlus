///Template class Build in datatype as Constant
#include<iostream>
using namespace std;

template <class T, int size>
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

    return 0;
}

