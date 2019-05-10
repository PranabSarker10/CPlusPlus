///Copy constructor
/**
Constructor will not be called in three cases.
1.If we use object as Function's parameter.
2.If we use it as Function's return type.
3.If we intialize object at the declaration time.
*/
/**
Use of copy constructor:
1.If we intialize object at the declaration time.
2.Generally remember if we use pointer we have use copy constructor.
*/
#include<iostream>
using namespace std;
class abc
{
    int *p;
public:
    abc()
    {
        p = new int (0);
        cout<<"Constructor & "<<*p<<endl;
    }
///Constructor: At the time of constructing object.
    ~abc()
    {
        cout<<"Destructor & "<<*p<<endl;///AT first destructor and then the value of p is printed.
        delete p;///After printing the value 4 for one time, it will be destroyed.
    }
///Destructor: At the time of destructing object.
    void set(int x)
    {
        *p = x;
    }
    void get()
    {
        cout<<*p<<endl;
    }
    abc(abc &obj)///Copy Constructor
    {
        p = new int(1);///new value is set.
        cout<<"Constructor & "<<*p<<endl;

    }
};
int main()
{
    abc a;///Constructor is called.
    a.get();///0 is for pointing 0.
    abc b = a;///Copy constructor is called.
    a.get();///As a is 0 so 0 is printed.
    b.get();///As b is 1 so 1 is printed.
    ///Here delete function deletes the address.
    b.set(4);///First a = 0 is printed. Then b = 4 is printed(as we set it 4).
///After delete new value is creted by copy constructor so it won't show garbage value.
    a.get();
    b.get();
///As the constructor of b is called late so the destructor of b will be called first. And as we set 4 so without printing 1 it prints 4.
///As the constructor of a is called first so the destructor of a will be called late. And the value of will be printed(0).
    return 0;
}

