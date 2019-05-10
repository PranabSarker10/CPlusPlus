///WIDTH, PRECISION, FILL
#include<iostream>
using namespace std;

int main()
{
    cout<<"PranabParna"<<endl;
    cout.width(20);
    cout<<"PranabParna"<<endl;///It will stay with 20 characters and extra characters will be empty.
///Remember: We can give more character from width to print. Example is :
    cout<<"Pranab & Parna"<<endl;
    cout.width(7);
    cout<<"Pranab & Parna"<<endl;///It will stay with 20 characters and extra characters will be empty.


    return 0;
}
