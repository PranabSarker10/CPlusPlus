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
    void get(){cin>>roll;}
    void print(){cout<<mark<<" "<<roll<<endl;}
};
/**
After publicly inherit, the result class becomes:
class Result
{
public:
    int roll;
    int mark;
    void get(){cin>>roll;}
    void print(){cout<<mark<<" "<<roll<<endl;}
};
**/

int main()
{
    Result ob;
    ob.mark = 75;
    ob.roll = 1;

    cout<<ob.mark<<" "<<ob.roll<<endl;

    return 0;
}
