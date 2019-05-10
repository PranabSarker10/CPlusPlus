///EXCEPTION HANDLING TERMINATE & UNEXPECTED

#include<iostream>
using namespace std;

void excep() throw(double)
{
    throw 1;
}

void T()
{
    cout<<"Terminate"<<endl;
}

void U()
{
    cout<<"Unexpected"<<endl;
}

int main()
{
    set_terminate(T);
    set_unexpected(U);

    try
    {
        excep();
    }
    catch(int e)
    {
        cout<<e<<endl;
    }
    return 0;
}




