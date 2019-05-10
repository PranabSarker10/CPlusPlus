///EXCEPTION HANDLING TERMINATE & UNEXPECTED
#include<iostream>
using namespace std;

void excep()
{
    throw 1;
}

int main()
{
    try
    {
        excep();
    }
    catch(double e)
    {
        cout<<e<<endl;
    }
///Remember: Throwing integer we cannot catch double. So the program will be crashed.
///THIS IS TERMINATE. I mean, Throw is done but Catch is not done.
    return 0;
}


