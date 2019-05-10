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
    rectangle(){height = 3; width = 2;}///Here no variable is declared. And height & width are set by default.

    int area()
    {
        return height*width;
    }

};

int main()
{
    rectangle obj[5];
///Here at the time of object declaration we have to give the set of constructor. Otherwise it will not get the constructor of the rectangle. But here it's possible. As height & width are set by default.
    for(int i=0; i<5; i++)
    {
        cout<<i<<" = "<<obj[i].area()<<endl;
    }

    return 0;
}



