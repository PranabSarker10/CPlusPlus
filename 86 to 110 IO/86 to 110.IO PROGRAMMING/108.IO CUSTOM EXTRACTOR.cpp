///IO CUSTOM EXTRACTOR >>

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

istream &operator >> (istream &stream, student &s)
{
    cout<<"Enter name: ";
    stream>>s.name;
    cout<<"Enter id: ";
    stream>>s.sid;

    return stream;
}

int main()
{
     student first;
     student second;
     cin>>first;
     cout << first<<endl;
     cin>>second;
     cout << second<<endl;
///      --       --
///this:  ^        ^ will show error. So have return stream must.
    return 0;
}

