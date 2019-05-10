///Exceptional Handling & Inheritance

#include<iostream>
using namespace std;

class Base
{

};
///Remember: Of course:-> Derive class will inherit Base class.
class Derive : public Base
{

} ;
int main()
{
    Base b;
    Derive d;
    try
    {
        throw b;
    }

    catch(Base e)
    {
        cout<<"Base Exception"<<endl;
    }

    catch(Derive e)
    {
        cout<<"Derive Exception"<<endl;
    }

    return 0;
}
