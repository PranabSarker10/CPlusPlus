#include<iostream>
using namespace std;

class Student
{
protected:
    int roll;
    int mark;
};
class Result : public Student
{
public:
    void set(){cin>>roll>>mark;}
    void print(){cout<<roll<<" "<<mark<<endl;}
};
///If we inherit protected members in public or protected mode it will be protected. But if we inherit protected members in private mode it will be private.
int main()
{
    Result ob;
    ob.set();
    ob.print();
    return 0;
}

