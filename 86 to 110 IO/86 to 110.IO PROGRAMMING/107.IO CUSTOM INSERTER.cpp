///IO CUSTOM INSERTER <<

#include<iostream>
#include<iomanip>
using namespace std;

class student
{
public:
    int sid;
    string name;

    student() {}
    student(int id, string n) {sid=id; name=n;}
};

ostream &operator << (ostream &stream , student s)
{
    stream << s.name << " ";
    stream << s.sid << endl;

    return stream;///MUST return
}
///Here ostream is outputstream
int main()
{
     student first(143024,"Pranab");
     student second(143023,"Nion");
     cout << first<<endl;
     cout << second<<endl;
///      --       --
///this:  ^        ^ will show error. So have return stream must.
    return 0;
}
