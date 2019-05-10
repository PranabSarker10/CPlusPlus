///OOP
///C is a Structured Programming language and C++ is an Object Oriented Programming language.
///Unstructured programming language: Here the advantages of local variable & recursion is not presented.(Ex:Assembly language,Fortran etc.)
/**


                                                _____
                                             --/     \----
                                            |  _ RED _    |
                                             --_-----_----



    _____
 --/     \----                                  _____
|  _ CAR _    |   ---->                      --/     \----
 --_-----_----                              |  _BLUE _    |
                                             --_-----_----



                                                _____
                                             --/     \----
                                            |  _ORANGE_   |
                                             --_------_---


OBJECT:
Presentation of attributes(means characteristics) & behaviors(means works) by programming, is called Object.
Here the color of the 3 cars(RED,BLUE,ORANGE) is indicating attributes and the start or the stop(I mean works) indicating behavior. And each of the 3 cars is a separate object.
CLASS:
By which the attributes and behaviors of some type objects is defined or logically represented, is called Class.
Here the 3 cars(RED,BLUE,ORANGE) have a common thing. And this is: All of them are car. And here this car is Class which has 3 objects(RED, BLUE, ORANGE).
**/

/**
Object Oriented Programming has 3 characteristics.
1.Encapsulation:
The process of making Class by combining the Attributes & Behaviors of objects is called Encapsulation.
The process of combining Member_variable & Member_function of a class is called Encapsulation.
2.Polymorphism:
Declaring many functions of same name whose functions works are different from one another is called polymorphism.
Ex:
int add(int a, int b)
{....}
float add(int a, int b)
{....}
Images example:The dak or call of various animals is not same but all the sounds of the animals is one kind of dak or call.
3.Inheritance:
The incident of using one value of a class by this class & another class(with the permission of user) is called Inheritance.
Here the class inherits another class is called derived class and the inherited class is called base class.

If necessary, we can use the Attributes & Behavior of base class in derived class.
Remember: Some more attributes & Behaviors can be presented in derived class.

Image Example:
Wheeled vehicles & Without Wheeled vehicles are the members of vehicle class.
Again Motor vehicles & By-cycle vehicles are the members of Wheeled vehicle class.
**/
#include<iostream>
using namespace std;
int main()
{
    int i;
    cin>>i;///cin is for taking input.
    cout<<"The value is:"<<i<<endl;///cout is for showing output.
    return 0;
}
