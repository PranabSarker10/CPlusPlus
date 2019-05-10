#include<iostream>
using namespace std;

class Student
{
public:
    int roll;
    int mark;
};

class Result : protected Student///Here the derive class(Result) protectedly inherit the base class(Student).
{
public:
    void set(){cin>>roll>>mark;}
    void print(){cout<<roll<<" "<<mark<<endl;}
};

/**
After protectedly inherit, the result class becomes:
class Result
{
protected:
    int roll;
    int mark;
public:
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


