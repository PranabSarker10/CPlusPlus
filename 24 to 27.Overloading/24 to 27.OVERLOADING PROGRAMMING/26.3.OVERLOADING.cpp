///As here only return type are different so we will fill ambiguous. Ambiguous means donot knowing what to do.
///So it can show error or print what it is thinking.
#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

float add(double a, double b)
{
    return (float)((a+b)*2);
}

double add(double a, double b)
{
    return (a+b)*3;
}

int main()
{
    cout<<add(4.2,3.2)<<endl;
    return 0;
}
