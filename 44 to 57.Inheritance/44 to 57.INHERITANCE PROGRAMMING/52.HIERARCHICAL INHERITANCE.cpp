///Hierarchical inheritance
#include<iostream>
using namespace std;
class info
{
    int id;
    int mark;
public:
    void get_id(){ cin>>id; cout<<id<<endl; }
    void get_mark(){ cin>>mark; cout<<mark<<endl; }
};
class result : private info
{
public:
    void print(){get_mark();}
};
class student : private info
{
public:
    void print(){get_id();}
};

int main()
{
    student sob;
    sob.print();

    result rob;
    rob.print();

    return 0;
}


