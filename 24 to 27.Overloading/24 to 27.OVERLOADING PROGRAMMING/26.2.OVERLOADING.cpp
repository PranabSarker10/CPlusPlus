///Overloading: It means doing a particular work from several works of same name.
/**
Function overloading:
It means that more than one function will do two seperate works but there name will be same.
If the same named function is called, it will dynamically decides that like which function it will work.(????)
It discusses that we can represent the int_sum & float_sum by sum to calculate => return a+b;
add(5,6)
*)Function name -> add
*)Number of arguments -> 2
*)Type of arguments:
          1st -> int
          2nd -> int
1.add(5,6) 2.add(5) 3.add(5,5.5) 4.add(1,2)

Here for 1 & 4 case: Number of arguments & Type of arguments are same. In this case function overloading will not be applicable.


Operator overloading:
It discusses that we can add two number not only in int,float or double but also in string, char array. And that is by operator overloading.
*/

#include<iostream>
using namespace std;

int add(int a, int b, int c)
{
    return a+b+c;
}

double add (double a, double b, double c)
{
    return (a+b+c)*2;
}


float add(float a, float b, float c)
{
    return (a+b+c)*3;
}

int main()
{
    float a = 3.10, b = 8.79, c = 11.91;
    cout<<add(a,b,c)<<endl;///Here add of float is used.
    cout<<add(10.20,2.7,3.1)<<endl;///Here add of double is used.
    cout<<add(10,2,3)<<endl;///Here add of integer is used.
    cout<<add((float)10.20,(float)2.7,(float)3.1)<<endl;///As we use casting here so the add of float will be used.
    return 0;
}

