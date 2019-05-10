///Exception Handling and Function
///Throwing from try when we get a variable, it works like global variable(not local variable).
#include<iostream>
using namespace std;

void positive(int a)
{
    cout<<a<<endl;
    if(a<1) throw a;///throw is local but we can use(catch) it in main function. And the attitude is global.
}

int main()
{
    try
    {
        positive(5);
        positive(-5);///Here throw will occur.
        positive(6);///After throwing this line will not be executed.
    }
    catch (int e)
    {
        cout<<"Exception "<<e<<endl;
    }
    return 0;
}
