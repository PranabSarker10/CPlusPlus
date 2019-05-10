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
    catch(int e)///As we catch int here so a=2 or a=3 will create type miss-matching.
    {
        cout<<"Exception"<<endl;
    }

    return 0;
}
