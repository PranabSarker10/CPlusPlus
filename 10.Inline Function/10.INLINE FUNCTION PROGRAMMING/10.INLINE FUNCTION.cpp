///Member Function
///The Class of a member cannot only be variable, it can also be a function.

///Remember: If only proto-type of the function is declared in the class and if the internal part of the function is declared outside the class then it can reduces the understanding problem & extra load of the class. The memory is also saved.

///Inline function is used to find the demanded function easily. But if we want to use inline function all-time, it can create problem.

#include<iostream>
using namespace std;

class rectangle
{
public:
    int height;
    int width;
    int area();///Now when we will call this function out of the class rectangle, we have to use created object's DOT(.) extension with the function.
};
///int[datatype] rectangle[class]::[scope resulation]area()[function]
///{ internal part of function }
inline int rectangle::area()///Using inline at first, inline function is declared.
{
        return height*width;
}
///Here scope resulation means area() => function is in the rectangle=> class.

int main()
{
    rectangle obj;
    obj.height = 5;
    obj.width = 6;

    cout<<"AREA = "<<obj.area()<<endl;

    return 0;
}

