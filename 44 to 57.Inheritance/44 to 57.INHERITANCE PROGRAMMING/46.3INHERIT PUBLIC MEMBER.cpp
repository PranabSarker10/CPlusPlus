#include<iostream>
using namespace std;

class Student
{
public:
    int roll;
    int mark;
};

class Result : public Student///Here the derive class(Result) publicly inherit the base class(Student).
{
public:
    void set(){cin>>roll>>mark;}
    void print(){cout<<roll<<" "<<mark<<endl;}
};

/**
After publicly inherit, the result class becomes:
class Result
{
public:
    int roll;
    int mark;
    void set(){cin>>roll>>mark;}
    void print(){cout<<roll<<" "<<mark<<endl;}
};
**/

int main()
{
    Result ob;
    ob.set();
    ob.print();
    return 0;
}
