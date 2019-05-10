///Object in function: We can use object like as variable.
///Two students named Pranab are presented in CSE department of Ruet. But our Pranab is in this section. Here for Our Pranab(for giving Priority) this pointer is used.
///We can use variables in two places of a function(intial & return)

///As parameter:
#include<iostream>
using namespace std;
class rectangle
{
    int height;
    int width;
public:
    void set(int height, int width)
    {
        this->height = height;///This is used to specify rectangle class's height.
        this->width = width;///This is used to specify rectangle class's width.
    }
    int area()
    {
        return height*width;
    }
};

void print (rectangle abc)
{
    cout<<abc.area()<<endl;
}

int main()
{
    rectangle obj;
    obj.set(2,3);
    print(obj);
    return 0;
}



