///Exception Handling Advance
#include<iostream>
using namespace std;

int main()
{
    try
    {
        cout<<"Try"<<endl;
        throw 1;
        cout<<"Try end"<<endl;///This line will not be executed. Because The next any line after throw will not be executed.
    }
    catch(int e)///Here int is the type which we throw from try to catch in.
    {
        cout<<"Catch "<<e<<endl;
    }
    return 0;
}
