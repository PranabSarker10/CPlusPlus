///EXCEPTION HANDLING TERMINATE & UNEXPECTED
#include<iostream>
using namespace std;

void excep()
{
    throw 1;
}

int main()
{
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

