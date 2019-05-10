///Exception Handling and Function
///Throwing from try when we get a variable, it works like global variable(not local variable).
#include<iostream>
using namespace std;

void positive(int a)
{
    cout<<a<<endl;
    try
    {
        if(a<1) throw a;
    }
    catch (int e)
    {
        cout<<"Exception "<<e<<endl;
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

