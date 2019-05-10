///EXCEPTION HANDLING CATCH ALL EXCEPTIONS
#include<iostream>
using namespace std;

int main()
{
    try
    {
        throw 1;
    }
    catch(int e)
    {
        cout<<"Exception"<<endl;
    }

    return 0;
}
