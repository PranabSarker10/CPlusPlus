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
class cost
{
    int cost_rate;
public:
    void set_value(int a)
    {
        cost_rate = a;
    }
    int total_cost(rectangle A)
    {
        return cost_rate*A.area();
    }
};

int main()
{
    rectangle r;
    cost c;
    r.set(5,6);
    c.set_value(100);
    cout<<r.area()<<endl;
    cout<<c.total_cost(r)<<endl;
    return 0;
}
