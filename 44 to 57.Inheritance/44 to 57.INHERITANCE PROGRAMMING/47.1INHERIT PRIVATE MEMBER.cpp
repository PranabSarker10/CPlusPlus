#include<iostream>
using namespace std;

class Student
{
private:
    int roll;
    int mark;
};

class Result : public Student///Here the derive class(Result) privaely inherit the base class(Student).
{
public:
    void set(){cin>>roll>>mark;}
    void print(){cout<<roll<<" "<<mark<<endl;}
};

int main()
{
    Result ob;///As roll and mark are private so it will show error.
    ob.set();
    ob.print();
    return 0;
}
