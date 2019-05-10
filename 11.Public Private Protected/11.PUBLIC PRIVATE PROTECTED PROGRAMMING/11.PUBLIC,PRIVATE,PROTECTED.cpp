///Public  Private  Protected
///Access modifier: A member of a class can be accessed from the outside of that class or can not be accessed from the outside of that class or someparts can be accessed from the outside of the class. Everything of this is disscussed on access modifier.
///Everything of a class is the member of that class.
///In Public: We can access member outside of the class.
///In Private & Protected: We cannot access use member outside of the class
///In normal case, the work of private and protected are same.
///Here out-side of the class means not included in the class.
///Remember: If we don't declare Public  Private  Protected in the class. Then by default all the members is declared as Private.
#include<iostream>
using namespace std;

class rectangle
{
///Remember: The public member of specific class can access the private member of the specific class.
///Remember: Private is used to make security system strong.
    int height;
    int width;
public:
    void set(int h, int w);///Here the set function is public.
    int area();
};
int rectangle::area()///Here area claculate the height and width.
{
        return height*width;///As area is declared in the class so this is valid. But remember we cannot access private members of a class in main function.
}
void rectangle::set(int h, int w) ///Here set function has changed the value of height & width.
{
    height = h;
    width = w;
}

int main()
{
    rectangle obj;
    obj.set(5,6);///As set function is public, we can access it from main function. By using this we can indirectly set the value of height & width. Though height & width are private but we can use it.

    cout<<"AREA = "<<obj.area()<<endl;///As area is public, so we can access it from main function.

    return 0;
}
