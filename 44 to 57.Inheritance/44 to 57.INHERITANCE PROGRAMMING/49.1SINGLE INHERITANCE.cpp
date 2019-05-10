///Single inheritance
#include<iostream>
using namespace std;

class info
{
    int id;
public:
    void set_id();
    int get_id();
};

class student : public info
{
public:
    void print();
};

void info::set_id()
{
    cin>>id;
}
int info::get_id()
{
    return id;
}

void student::print()
{
    cout<<get_id()<<endl;
}

int main()
{
    student ob;
    ob.set_id();
    ob.print();
    return 0;
}
