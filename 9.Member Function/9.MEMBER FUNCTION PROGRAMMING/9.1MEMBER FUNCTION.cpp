///Member Function
///The Class of a member cannot only be variable, it can also be a function.
#include<iostream>
using namespace std;

class rectangle
{
public:
    int height;
    int width;
    int area()///Now when we will call this function out of the class rectangle, we have to use created object's DOT(.) extension with the function.
    {
        return height*width;
    }
};

int main()
{
    rectangle obj;
    obj.height = 5;
    obj.width = 6;

    cout<<"AREA = "<<obj.area()<<endl;

    return 0;
}

