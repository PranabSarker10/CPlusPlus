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
///Here writing friend cost can be possible. But then we have declare before that cost is a class.(Like as: class cost)
    friend class cost;///Now the friend cost can use all private & public members of rectangle class.
///(Though cost is not the member of rectangle class but cost is a friend of rectangle class).
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
        return cost_rate*A.height*A.width;///As we use friend function so height & width can be returned.(Though they are private member of friend class)
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


