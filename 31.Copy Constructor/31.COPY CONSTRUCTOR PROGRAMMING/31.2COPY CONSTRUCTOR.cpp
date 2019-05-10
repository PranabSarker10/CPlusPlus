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
};
int main()
{
    abc a;
    a.get();
    abc b = a;
    a.get();
    b.get();///Here delete function deletes the address.
    b.set(4);
    a.get();///As deleted so here it will show garbage value or program will be crashed.
    b.get();

    return 0;
}
