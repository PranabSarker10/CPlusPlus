///Exception: It means that One thing does not working generally. Example: b=0 is an exception of a/b.
///Exception Handling: It is based on 3 parts. 1)Try 2)Catch 3)Throw
///We will do general works in try block and if any exception is found, we will throw it.
///This is used to handle error.
#include<iostream>
using namespace std;

int main()
{
    try
    {
        cout<<"Try"<<endl;
        throw 1;
    }
    catch(int e)///Here int is the type which we throw from try to catch in.
    {
        cout<<"Catch "<<e<<endl;
    }
    return 0;
}
