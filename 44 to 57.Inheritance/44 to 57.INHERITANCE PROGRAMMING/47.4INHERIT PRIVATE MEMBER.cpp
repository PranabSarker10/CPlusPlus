#include<iostream>
using namespace std;

class Student
{
private:
    int roll;
    int mark;
public:
    void set(){cin>>roll>>mark;}
    void print(){cout<<roll<<" "<<mark<<endl;}
};
///This is not inheritance of private mode. This a special kinds of access system.
class Result : public Student
{
public:
    void all()
    {
        set();
        print();
    }
    void p()
    {
        cout<<roll;///This will shown error.
    }
 ///As roll is private variable, we can't access it from here.
};

int main()
{
    Result ob;
    ob.set();
    ob.print();
    return 0;
}

