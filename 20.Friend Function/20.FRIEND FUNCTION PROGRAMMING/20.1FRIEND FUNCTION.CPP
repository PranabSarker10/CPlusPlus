///Friend function
#include<iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
    void set(int a,int b)
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
    rectangle r;
    r.set(5,6);
    cout<<r.area()<<endl;
    return 0;
}
