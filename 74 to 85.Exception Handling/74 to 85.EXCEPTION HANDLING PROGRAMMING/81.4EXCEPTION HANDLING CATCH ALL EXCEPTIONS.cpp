///EXCEPTION HANDLING CATCH ALL EXCEPTIONS
#include<iostream>
using namespace std;

int main()
{
    try
    {
        int a;
        cin>>a;

        if(a==1) throw 1;
        if(a==2) throw 1.2;
        if(a==3) throw "Parna Rani Paul";
    }
    catch(...)///Here 3 dots mean all exception will be caught by it.
    {
        cout<<"Exception"<<endl;
    }

    return 0;
}

