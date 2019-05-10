///Template Intro: It reduces 3 functions(same name) of 3 datatypes into 1 functions(same name) of 3 datatypes.
#include<iostream>
using namespace std;
int add(int a, int b)
{
    return a+b;
}

double add(double a, double b)
{
    return a+b;
}

string add(string a, string b)
{
    return a+b;
}

int main()
{
    cout<<add(143023,1)<<endl;
    cout<<add(5.6,6.1)<<endl;
    cout<<add("Pranab"," Sarker")<<endl;
    return 0;
}

