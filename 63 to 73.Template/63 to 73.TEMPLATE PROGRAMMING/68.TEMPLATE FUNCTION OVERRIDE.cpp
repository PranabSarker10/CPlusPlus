///Template Function Override: The Process of giving a behaviour for which the function will not work for a specific datatype.
#include<iostream>
using namespace std;

template <class T1>
void print (T1 a)///Here using void is logical. Because it indicates return type.
{
    cout<<a<<endl;
}

void print (double a)
{
    cout<<"Override"<<endl;
}

int main()
{
    print(4);
    print(4.4);
    print("Parna");
    return 0;
}






