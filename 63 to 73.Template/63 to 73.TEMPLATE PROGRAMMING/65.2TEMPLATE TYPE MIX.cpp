#include<iostream>
using namespace std;

template <class T>
void print (T a)///Here using void is logical. Because it indicates return type.
{
    cout<<a<<endl;
}

int main()
{
    print(5);
    print(5.5);
    print("GOOGLE MICROSOFT NASA");
    return 0;
}



