///Object in function: We can use object like as variable.
///Two students named Pranab are presented in CSE department of Ruet. But our Pranab is in this section. Here for Our Pranab(for giving Priority) this pointer is used.
///We can use variables in two places of a function(intial & return)

///As return type:
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

rectangle scan ()
{
    int h,w;
    cin>>h>>w;
    rectangle ob;
    ob.set(h,w);
    return ob;
}

void print(rectangle abc)
{
    cout<<abc.area()<<endl;
}

int main()
{
    rectangle obj;
    obj = scan();
    print(obj);

    return 0;
}




