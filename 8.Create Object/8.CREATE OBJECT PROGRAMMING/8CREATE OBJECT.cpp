///Create Object
///Object is a form of Class. Ex:If human is a class then I am an object of that Class.
///Pranab(One object) and Sharif(another object) are of same Class. But attributes and behaviors of us are not same. So, we are different object.
#include<iostream>
using namespace std;

class rectangle///class named ractangle.
{
public:
    int height;///Member variable.
    int width;///Member variable.
};///After the closing bracket semi-colon(;) is a must.

int main()
{
    rectangle obj;///At first,the Class of the object is written. Then object name is written.
///Remember: An Object has the same properties, which properties are presented in a class.
///Ex: I have head,hand,leg,height,width etc. like a human.
///So the properties(height & width) of rectangle Class are the properties of the created object(obj).
    obj.height = 5;///Like as my height, it is object's height.
    obj.width = 6;///Like as my width, it is object's width.

    cout<<"AREA = "<<obj.height*obj.width<<endl;

    return 0;
}
