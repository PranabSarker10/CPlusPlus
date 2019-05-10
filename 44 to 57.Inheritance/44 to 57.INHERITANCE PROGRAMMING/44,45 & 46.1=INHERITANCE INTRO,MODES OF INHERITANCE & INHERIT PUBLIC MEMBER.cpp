///Inheritance
///Inheritance is a process of making one class from another class.
///Inheritence is the process by which a new class(derived class) is created by adding more properties with a previous class(base class).
/**
Advantages:
1.Data Reusability:Using a code again & again.
2.Data abstruction:Adding something in new class.
**/

/**
Types of inheritance:
1.Single inheritance: Making a derived class from a base class.
2.Multiple inheritance: Making a derived class from more then one base class.
3.Multilevel inheritance: Getting a new class by inheriting a base class and then inheriting this new class when we get a derived class then the process is called multilevel inheritance.
4.Hierarchical Inheritance: The process of making more than one derived class from a base class is called Hierarchical Inheritance.
5.Hybrid inheritance: Suppose we have two base classes. we have created a new class from a base class. Now the process of creating a derived class by using the new class and the another base class is called Hybrid inheritance.
6.Virtual inheritance: Suppose we have created two new classes from a base class. Now the process of creating a derived class by using the two new classes and the base class is called Virtual inheritance.
**/

/**
Modes of inheritance:
Public: We can inherit it. In public mode inheritance, private properties is not changed. But public and protected become public.
Private: We can not inherit it.In private mode inheritance, private properties is not changed. But public and protected become private.
Protected: We can inherit it.In protected mode inheritance, private properties is not changed. But public and protected become protected.
**/
#include<iostream>
using namespace std;

class student
{
public:
    int roll;
    int mark;
};

int main()
{
    student ob;
    ob.mark = 75;
    ob.roll = 1;

    cout<<ob.mark<<" "<<ob.roll<<endl;

    return 0;
}
