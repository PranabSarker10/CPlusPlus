///Overloading & ambiguity
///Ambiguity:If there is two possible options of a work then it is called ambiguity.
///For ambiguity: one program can show error or print as it likes.

///This is another code which falls us ambiguity.
#include<iostream>
using namespace std;

int abc(int a, int b=7)
{
    return a+b;
}

int abc(int a)
{
    return a;
}

int main()
{
    cout<<abc(5,6)<<endl;
    cout<<abc(5)<<endl;

    return 0;
}

