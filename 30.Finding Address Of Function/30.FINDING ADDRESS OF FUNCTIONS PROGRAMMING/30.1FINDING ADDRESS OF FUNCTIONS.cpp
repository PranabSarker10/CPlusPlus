///Finding address of functions
#include<iostream>
using namespace std;

int abc(int a, int b)
{
    return a+b;
}

int abc(int a)
{
    return a;
}

int main()
{
    int (*p)(int,int);
    p = abc;
    cout<<p<<endl;///This is address of the function.
    cout<<p(4,5)<<endl;

    return 0;
}

