///EXCEPTION HANDLING FINAL EXAMPLE
#include<iostream>
using namespace std;

void divide(double numerator, double denominator)
{
    try
    {
        if(denominator==0) throw 0;
        cout<<"Result: "<<numerator/denominator<<endl;
    }

    catch(int e)
    {
        cout<<"Can't divide something by zero"<<endl;
    }
}
int main()
{
    double num,denom;

    do
    {
        cout<<endl;
        cout<<"Enter numerator (0 to stop): ";
        cin>>num;
        cout<<"Enter Denominator: ";
        cin>>denom;

        divide(num,denom);
    }

    while(num);///means while(num!=0)

    return 0;
}

