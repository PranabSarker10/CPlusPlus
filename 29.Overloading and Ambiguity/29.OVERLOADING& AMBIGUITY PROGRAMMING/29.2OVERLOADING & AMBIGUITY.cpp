///Overloading & ambiguity
///Ambiguity:If there is two possible options of a work then it is called ambiguity.
///For ambiguity: one program can show error or print as it likes.
#include<iostream>
using namespace std;

int abc(int a, int b)
{
    return a+b;
}

float abc(int a,int b)///It will show error.
{
    return a/b;
}
///Remember: Function overloading is not possible if we change return_type.
int main()
{
    cout<<abc(5,6)<<endl;

    return 0;
}

