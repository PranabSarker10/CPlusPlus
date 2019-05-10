///Operator overloading strat:
///Operator overloading is done by using operator function. And in operator function, no default argument can be stayed.
#include<iostream>
using namespace std;
///System of operator overloading:
ReturnType ClassName::operator OperatorToBeOverloaded (ArgumentList)
{

}
///Example of operator overloading:
int abc::operator + (abc ob)
{

}

int main()
{
///For unary:No argument is presented.
    operand OperatorToBeOverloaded;
    a++;
    OperatorToBeOverloaded operand;
    ++a;
///For binary:One argument is presented.
    operand OperatorToBeOverloaded operand;
    a+b;

    return 0;
}
