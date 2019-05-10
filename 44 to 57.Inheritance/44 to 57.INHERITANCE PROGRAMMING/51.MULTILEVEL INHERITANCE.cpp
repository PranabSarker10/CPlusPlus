///Multilevel inheritance
#include<iostream>
using namespace std;
class info
{
    int id;
public:
    void get_id(){
        cin>>id;
        cout<<id<<endl;
    }
};
class result : public info
{
    int mark;
public:
    void get_mark(){
        cin>>mark;
        cout<<mark<<endl;
    }
};
class student : private result
{
public:
    void print(){
         get_id();
         get_mark();
    }
};

int main()
{
    student ob;
    ob.print();
    return 0;
}

