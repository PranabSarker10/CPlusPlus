///Constructor Destructor
///when two functions/members by default present in a class then one function/member is called constructor and another function/member is called destructor. And here both of them are public.
/**
Characteristics of Constructor:
1.The name of the constructor must be same with the name of class.
2.The class has no return type.
3.We cannot call it.It will be called by its own(When object will be declared in main function).
Characteristics of Destructor:
1.The name of the destructor must be same with the name of class. The symbol (~) means tilde.
2.The class has no return type.
3.It will be called(by its own) at the finishing time of object in main function.
**/
/**
Difference between constructor & destructor:
1.Constructor is called when the object is created and Destructor is called when the object is destroyed.
2.We can give parameter in constructor function(Ex: rectangle(int a, int b)), But we can't give parameter in destructor function.
**/
///REMEMBER:CONSTRUCTOR AND DESTRUCTOR ARE MAINLY CALLED TO INITIALIZE VALUE.(I MEAN IF VALUE IS PRESENT WE CAN GIVE IT).
///REMEMBER:The constructor of a object presented at first, the destructor of that object will be called at last.(Example:Mass/Wad of books. The book put first is taken at last.)
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
    rectangle(int h, int w);///A Constructor with parameter.
///Function with the same name of the class.
    ~rectangle();///Destructor
};
int rectangle::area()///Here area claculate the height and width.
{
        return height*width;///As area is declared in the class so this is valid. But remember we cannot access private members of a class in main function.
}



rectangle::rectangle(int h, int w) ///As constructor has no return so there is no return type. And the name of the class and function is same.
///A constructor with parameter.
{
    height = h;
    width = w;
    cout<<"Constructor"<<endl;
}



rectangle::~rectangle() ///As destructor has no return so there is no return type. And the name of the class and function is same.
{
    cout<<"Destructor"<<endl;
///Remember: Here height & width is not needed. As destructor is called after finishing the object.
}

int main()
{
    rectangle obj(5,6);///Here parameter must be given.
///As we declared a object here so function will be called.
///Remember: A Constructor can be created in two ways. With parameter and without parameter. But if parameter is present we have to declare it with object.
    cout<<"AREA = "<<obj.area()<<endl;///As area is public, so we can access it from main function.

    return 0;
}

