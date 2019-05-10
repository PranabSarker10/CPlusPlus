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
///Remember: Accessing variables of private mode is impossible. But it is not meant that private variabes are vanished. They stayed here invisibly.
class Result : private Student///As here all functions become private mode, we can't use set and print function in main function. By using all function in main function we can access it.
{
public:
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


