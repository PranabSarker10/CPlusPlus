///New & Delete///These are used for dynamic memory allocation.
///Dynamic memory allocation: The needed memory at runtime of a program will be allocated.
#include<iostream>
using namespace std;

int main()
{
    int *ptr;///It will point the integer type data. Aand it has no address. Until we give this pointer an address we can't use it.
///We can't directly write *ptr = 5. As ptr has no address.

    ptr = new int(5);///Here the work of malloc,calloc & realloc in C is done by new.
///Remember: ptr = new int[5]; => means an array of 5 sizes.
/*
We won't use this format to save memory.
    int a;
    ptr = &a;
*/
    cout<<*ptr<<endl;

///But now we can directly write *ptr = 5.As ptr has an address.
    *ptr = 7;
    cout<<*ptr<<endl;

    delete(ptr);///By this we have created space.
///If we allocate something dynamically then we have to deallocate that.
///Here the work of free in C is done by delete.
    return 0;
}
