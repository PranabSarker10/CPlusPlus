///RANDOM TOPICS MEMBER INITIALIZE CONSTRUCTOR
/**
Use of constructor:
1.To initialize the value of member variable.

*/
#include<iostream>
using namespace std;

class abc
{
public:
    int x;
    int y;

    abc(int a,int b){x=a;y=b;}
};

int main()
{
    abc ob(1,2);
    cout<<ob.x+ob.y<<endl;
    return 0;
}
