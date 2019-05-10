///Exception Handling Multiple Catch Statements
#include<iostream>
using namespace std;

int main()
{
    try
    {
        cout<<"Try"<<endl;
        throw 1;
    }
    catch (int e)
    {
        cout<<"Exception(int) "<<e<<endl;
    }

    return 0;
}
