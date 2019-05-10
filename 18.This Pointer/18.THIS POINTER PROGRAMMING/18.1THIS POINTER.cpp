///This pointer:specifying the class which is using.
///Two students named Pranab are presented in CSE department of Ruet. But our Pranab is in this section. Here for Our Pranab(for giving Priority) this pointer is used.
#include<iostream>
using namespace std;
class rectangle
{
    int height;
    int width;
public:
    void set(int a, int b)
    {
        this->height = a;///This is used to specify rectangle class's height.
        this->width = b;///This is used to specify rectangle class's width.
    }
    int area()
    {
        return height*width;
    }
};

int main()
{
    rectangle obj;
    obj.set(2,3);
    cout<<obj.area()<<endl;
    return 0;
}
