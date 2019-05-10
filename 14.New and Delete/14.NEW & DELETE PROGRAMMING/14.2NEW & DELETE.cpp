///New & Delete///These are used for dynamic memory allocation.
///Dynamic memory allocation: The needed memory at runtime of a program will be allocated.
#include<iostream>
using namespace std;

int main()
{
    int *ptr;///It will point the integer type data. Aand it has no address. Until we give this pointer an address we can't use it.

    ptr = new int[5];/// This is a five sizes array.
    ptr[0] = 6;
    ptr[1] = 11;
///The next two lines are equal.
    cout<<ptr[0]<<endl;
    cout<<*ptr<<endl;

///The next two lines are equal.
    cout<<ptr[1]<<endl;
    cout<<*(ptr+1)<<endl;

    delete(ptr);
    return 0;
}
