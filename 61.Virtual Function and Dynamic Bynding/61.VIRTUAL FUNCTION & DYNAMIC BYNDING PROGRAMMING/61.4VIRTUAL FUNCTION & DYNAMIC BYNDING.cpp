///Virtual function and Dynamic Bynding
///Early/Static bynding:In non-virtual function,memory becomes allocate before runtime(at compiling time).
///Late/Dynamic bynding:In non-virtual function,memory becomes allocate at runtime.
///Virtual function is not possible in Constructor but posiible in destructor.
#include<iostream>
using namespace std;

class sound
{
public:
   virtual void print(){cout<<"Your sound"<<endl;}
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
    sound sob;
    dog dob;
    cat cob;

    sound *ptr;

    ptr = &dob;
    ptr->print();

    ptr = &cob;
    ptr->print();

    return 0;
}

