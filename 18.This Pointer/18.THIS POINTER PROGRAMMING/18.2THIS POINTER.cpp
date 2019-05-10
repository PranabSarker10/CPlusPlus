///This pointer:specifying the class which is using.
///Two students named Pranab are presented in CSE department of Ruet. But our Pranab is in this section. Here for Our Pranab(for giving Priority) this pointer is used.
#include<iostream>
using namespace std;
class rectangle
{
    int height;
    int width;
public:
    void set(int height, int width)
    {
        height = height;///This is not used to specify rectangle class's height. So garbage value is showed.
        width = width;///This is not used to specify rectangle class's width. So garbage value is showed.
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

