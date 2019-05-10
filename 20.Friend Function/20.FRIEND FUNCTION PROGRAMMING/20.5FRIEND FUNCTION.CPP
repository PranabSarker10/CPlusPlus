///Friend function
#include<iostream>
using namespace std;

class rectangle;///For forward reference(By this we defined that rectangle is a class and it is presented anywhere in the program)

class cost
{
    int cost_rate;
public:
    void set_value(int a)
    {
        cost_rate = a;
    }
    int total_cost(rectangle A);

    int area(rectangle A);
};

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

    friend int cost::total_cost(rectangle A);///This means only total_cost of cost class can access the members of rectangle class.
    friend int cost::area(rectangle A);
};

int cost::total_cost(rectangle A)
{
    return cost_rate*A.height*A.width;
}

int cost::area(rectangle A)
{
        return A.height*A.width;
}

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
