///Assigning object
///Like as variable assign, We can assign an object into another object of a class.
#include<iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
    void set(int a, int b);
    int area();
};
inline int rectangle::area()
{
    return height*width;
}
void rectangle::set(int a, int b)
{
    height = a;
    width = b;
}

int main()
{
    rectangle obj1,obj2;
    obj1.set(2,3);
    obj2.set(5,6);

    cout<<"Area = "<<obj1.area()<<endl;
    cout<<"Area = "<<obj2.area()<<endl;

    return 0;
}

