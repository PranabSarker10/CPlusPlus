///EXCEPTION HANDLING RESTRICTING EXCEPTION
#include<iostream>
using namespace std;

void excep(int a) throw ()///As we don't write anything in throw so the program will crash.
{
    if(a==1) throw 1;
    if(a==2) throw 1.2;
}

int main()
{
    try
    {
        excep(2);
    }
    catch(...)
    {
        cout<<"Exception"<<endl;
    }

    return 0;
}




