///Pure virtual function
#include<iostream>
using namespace std;

class sound
{
public:
   virtual void print()=0;///Here defination is not needed.
};

class dog : public sound
{
public:
    void print(){cout<<"Ghew"<<endl;}
};

class cat : public sound
{
public:
    void print(){cout<<"Meau"<<endl;}
};

int main()
{
    sound sob;///It will so error. Because in pure virtual function, we have no need to declare object.
    dog dob;
    cat cob;

    sound *ptr;

    ptr = &dob;
    ptr->print();

    ptr = &cob;
    ptr->print();

    return 0;
}


