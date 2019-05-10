///Finding address of functions
#include<iostream>
using namespace std;

int abc(int a, int b)
{
    return a+b;
}

void abc(int a)
{
    cout<<a<<endl;
}

int main()
{

    void (*p)(int);
    p = abc;
    abc(5);
    return 0;
}


