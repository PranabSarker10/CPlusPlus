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
///Remember: If we throw more than one items in try than after executing first throw all other throw will not be excecuted .
    }

    catch(Derive e)
    {
        cout<<"Derive Exception"<<endl;
    }
///Problem is solved catching Derive class at first.
    catch(Base e)
    {
        cout<<"Base Exception"<<endl;
///Remember: Derive class can come in Base class autometically by casting. And Base class cannot come in Derive class directly.
    }

    return 0;
}



