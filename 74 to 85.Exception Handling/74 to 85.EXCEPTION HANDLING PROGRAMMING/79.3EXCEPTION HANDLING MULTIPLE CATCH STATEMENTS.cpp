///Exception Handling Multiple Catch Statements
#include<iostream>
using namespace std;

int main()
{
    try
    {
        cout<<"Try"<<endl;
        throw 1.5;
    }

    catch (int e)
    {
        cout<<"Exception(int) "<<e<<endl;
    }

    catch (double e)
    {
        cout<<"Exception(double) "<<e<<endl;
    }
///It is like switch case. Here checking one by one it stops, when it gets the exact task.
    return 0;
}


