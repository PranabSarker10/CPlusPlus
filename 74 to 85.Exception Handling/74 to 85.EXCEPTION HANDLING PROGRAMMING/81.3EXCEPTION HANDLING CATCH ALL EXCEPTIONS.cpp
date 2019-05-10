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
    catch(int e)
    {
        cout<<"Exception"<<endl;
    }

    catch(double e)
    {
        cout<<"Exception"<<endl;
    }
///Here inputing 3 will crush the program.
    return 0;
}

