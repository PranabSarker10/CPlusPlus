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

int add (int a, int b)
{
    return a+b;
}

int add(int a, int b, int c)
{
    return a+b+c;
}

double add (double a, double b)
{
    return a+b;
}


float add(float a, float b, float c)
{
    return a+b+c;
}

int main()
{
    float a = 3.10, b = 8.79, c = 11.91;///By declaring here we can use float.
    cout<<add(3,4)<<endl;
    cout<<add(3,4,5)<<endl;
    cout<<add(3.4,4.3)<<endl;
///Remember:We cannot use 3 or 4 parameters here.
///Remember: For decimal number we have use double(not float). Otherwise it will be ambiguous(means two meaning).
///In function overloading: some changes are come between float & double.
    cout<<add(a,b,c)<<endl;
    return 0;
}
