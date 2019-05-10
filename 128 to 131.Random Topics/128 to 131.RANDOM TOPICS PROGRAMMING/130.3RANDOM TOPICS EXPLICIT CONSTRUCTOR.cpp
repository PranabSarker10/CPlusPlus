///Random topics explicit Constructor.
#include<iostream>
using namespace std;

class Pranab
{
public:
    int x;
    explicit Pranab (int a){x=a;} ///By using explicit we ban the use of p = 189; So it will show error.
};

int main()
{
    Pranab p = 189;
    cout<<p.x<<endl;
    return 0;
}

