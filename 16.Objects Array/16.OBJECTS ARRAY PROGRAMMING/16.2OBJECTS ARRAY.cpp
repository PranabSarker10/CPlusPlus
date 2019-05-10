///Array of objects=> When 1 parameter is declared.
///Like array of variables we can create array of objects. And the process is same.
#include<iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
     rectangle(int a)///It's a constructor which has no return-type.
    {
        height = a;
        width = a;
    }
    int area()
    {
        return height*width;
    }

};

int main()
{
    rectangle obj[5] = {1,2,3,4,5};///Here object array is created.
///Here at the time of object declaration we have to give the set of constructor. Otherwise it will not get the constructor of the rectangle.
    for(int i=0; i<5; i++)
    {
        cout<<i<<" = "<<obj[i].area()<<endl;
    }

    return 0;
}

