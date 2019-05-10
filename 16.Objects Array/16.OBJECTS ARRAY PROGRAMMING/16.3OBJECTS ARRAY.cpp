///Array of objects=> When 2 parameters are declared.
///Like array of variables we can create array of objects. And the process is same.
#include<iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
     rectangle(int a, int b)///It's a constructor which has no return-type.
    {
        height = a;
        width = b;
    }
    int area()
    {
        return height*width;
    }

};

int main()
{
    rectangle obj[5] = {rectangle(1,2),rectangle(2,2),rectangle(3,2),rectangle(4,2),rectangle(5,2)};///Here object array is created.
///Here at the time of object declaration we have to give the set of constructor. Otherwise it will not get the constructor of the rectangle.
    for(int i=0; i<5; i++)
    {
        cout<<i<<" = "<<obj[i].area()<<endl;
    }

    return 0;
}


