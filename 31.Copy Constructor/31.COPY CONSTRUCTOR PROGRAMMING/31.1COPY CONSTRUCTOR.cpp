///Copy constructor
/**
Constructor will not be called in three cases.
1.If we use object as Function's parameter.
2.If we use it as Function's return type.
3.If we intialize object at the declaration time.
*/
#include<iostream>
using namespace std;
class abc
{
public:
    abc(){cout<<"Cons...."<<endl;}///Constructor: At the time of constructing object.
    ~abc(){cout<<"Dest...."<<endl;}///Destructor: At the time of destructing object.
};
int main()
{
    abc a;
    abc b = a;///As we intialize at the declaration time so Constructor will not be called for b.
    return 0;
}
