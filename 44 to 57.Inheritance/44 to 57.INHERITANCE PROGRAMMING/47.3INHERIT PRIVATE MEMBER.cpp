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
public:///If we use private here it will show error.
    void all()
    {
        set();
        print();
    }
};

int main()
{
    Result ob;
    ob.all();
    return 0;
}

