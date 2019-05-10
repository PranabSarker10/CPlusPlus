///Hybrid inheritance: Combination of multiple inheritance and multilevel inheritance.
#include<iostream>
using namespace std;
class info
{
    int id;
public:
    int getId(){ cout<<"Enter ID:"; cin>>id; return id; }
};

class lab
{
    int lmark;
public:
    int getLmark(){ cout<<"Enter LAB MARK:"; cin>>lmark; return lmark; }
};

class exam : public lab
{
    int mark;
public:
    int getMark(){ cout<<"Enter EXAM MARK:"; cin>>mark; return mark+getLmark(); }
};

class result : private info, private exam///Hybrid inheritance.
{
public:
    void getResult()
    {
        int sid = getId();
        int res =  getMark();
        cout<<"ID -> "<<sid<<" Result -> "<<res<<endl;
    }
};

int main()
{
    result ob;
    ob.getResult();
    return 0;
}
