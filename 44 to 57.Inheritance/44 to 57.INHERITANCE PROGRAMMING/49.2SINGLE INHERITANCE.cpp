///Single inheritance
#include<iostream>
using namespace std;

class info
{
    int id;
public:
    void get()
    {
        cin>>id;
        cout<<id<<endl;
    }
};

class student : private info
{
public:
    void print(){get();}
};

int main()
{
    student ob;
    ob.print();
    return 0;
}
