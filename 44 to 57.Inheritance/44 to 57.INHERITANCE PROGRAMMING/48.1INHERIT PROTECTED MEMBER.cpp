#include<iostream>
using namespace std;

class Student
{
protected:
    int roll;
    int mark;
};
class Result : public Student
{
public:
    void set(){cin>>roll>>mark;}
    void print(){cout<<roll<<" "<<mark<<endl;}
};

int main()
{
    Result ob;
    ob.roll = 5;///We can't access it. As roll and mark are protected in Result class.
    return 0;
}


