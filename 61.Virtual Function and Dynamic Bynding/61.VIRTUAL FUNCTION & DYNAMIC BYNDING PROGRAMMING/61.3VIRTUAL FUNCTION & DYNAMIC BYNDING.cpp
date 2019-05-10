///Virtual function and Dynamic Bynding
#include<iostream>
using namespace std;

class sound
{
public:
    void print(){cout<<"Your sound"<<endl;}
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

    return 0;
}
