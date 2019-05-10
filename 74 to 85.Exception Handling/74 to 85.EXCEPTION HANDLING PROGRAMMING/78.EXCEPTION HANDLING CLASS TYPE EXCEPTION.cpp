///Exception Handling and Function
///Throwing from try when we get a variable, it works like global variable(not local variable).
#include<iostream>
using namespace std;
class excep
{
    int id;
    string name;

public:
    excep(int i, string n){id = i; name = n;}
    void print() {cout<<"Error id :"<<id<<" - "<<name<<endl;}
};

void positive(int a)
{
    cout<<a<<endl;
    try
    {
        if(a<1) throw excep(1,"Not a positive number");
    }
    catch (excep e)
    {
        e.print();
    }
}

int main()
{
    positive(5);
    positive(-5);
    positive(6);
///Here 3 functions will be called.
    return 0;
}


