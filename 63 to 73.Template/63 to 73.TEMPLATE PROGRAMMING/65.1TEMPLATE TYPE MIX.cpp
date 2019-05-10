#include<iostream>
using namespace std;

template <class T>
T print (T a)
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



