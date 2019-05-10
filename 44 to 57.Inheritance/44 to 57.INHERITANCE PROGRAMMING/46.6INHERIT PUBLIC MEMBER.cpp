#include<iostream>
using namespace std;

class Student
{
public:
    int roll;
    int mark;
};

class Result : private Student///Here the derive class(Result) privately inherit the base class(Student).
{
public:
    void set(){cin>>roll>>mark;}
    void print(){cout<<roll<<" "<<mark<<endl;}
};

/**
After privately inherit, the result class becomes:
class Result
{
    int roll;
    int mark;
public:
    void set(){cin>>roll>>mark;}
    void print(){cout<<roll<<" "<<mark<<endl;}
};
**/

int main()
{
    Student ob;///It will show proper output. As we are accessing student class.
    ob.roll = 5;
    ob.mark = 6;
    cout<<ob.roll<<" "<<ob.mark<<endl;
    return 0;
}

