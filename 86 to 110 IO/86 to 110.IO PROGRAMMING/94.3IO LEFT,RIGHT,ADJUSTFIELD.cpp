///IO LEFT,RIGHT,ADJUSTFIELDA
#include<iostream>
using namespace std;

int main()
{
    cout.width(20);
    cout.setf(ios::left,ios::adjustfield);///adjustfield works with the present situation.
  ///If we don't use left, it will set 'right' by default.
    cout<<"Pranab Sarker";
    cout<<"-";///This is not filled the empty position of 20. It(-) adds at the 21th position.

    return 0;
}

