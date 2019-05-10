///Object pointer
///Accessing object by a pointer.
///If we change set by P then the value of obj.area will be changed. Thus we can manipulate obj.
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
    rectangle *p;///It's pointing a rectangle type object.
    obj.set(3,4);
    cout<<obj.area()<<endl;
    p = &obj; ///It's the address.

    p->set(2,7); ///When we want to access something by pointer we have to use (->).
    cout<<obj.area()<<endl;
//    rectangle obj[5];///Here object array is created.
//    obj[0].set(1,2);
//    obj[1].set(2,2);
//    obj[2].set(3,2);
//    obj[3].set(4,2);
//    obj[4].set(5,2);
//
//    for(int i=0; i<5; i++)
//    {
//        cout<<i<<" = "<<obj[i].area()<<endl;
//    }

    return 0;
}

