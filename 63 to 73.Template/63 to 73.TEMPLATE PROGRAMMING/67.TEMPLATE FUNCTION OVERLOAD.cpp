///Template Function Overload
///In function overloading: The datatype of function should be different or the number of datatype should be different.
#include<iostream>
using namespace std;

template <class T1>
void print (T1 a)///Here using void is logical. Because it indicates return type.
{
    cout<<a<<endl;
}

template <class T1, class T2>
void print (T1 a, T2 b)///Here using void is logical. Because it indicates return type.
{
    cout<<a<<" "<<b<<endl;
}

int main()
{
    print(1);
    print(1,8);

    return 0;
}





