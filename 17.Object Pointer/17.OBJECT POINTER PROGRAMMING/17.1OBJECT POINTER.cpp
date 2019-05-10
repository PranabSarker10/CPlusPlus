///Object pointer
///Accessing object by a pointer.
#include<iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
    void set(int a, int b)
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
    rectangle obj;
    rectangle *p;
    obj.set(3,4);
    cout<<obj.area()<<endl;
   return 0;
}
