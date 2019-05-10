///EXCEPTION HANDLING TERMINATE & UNEXPECTED
#include<iostream>
using namespace std;

void excep() throw(double)///Double
{
///Here we want to throw double but we are throwing integer here.
///This is Unexpected.
    throw 1;///Integer
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



