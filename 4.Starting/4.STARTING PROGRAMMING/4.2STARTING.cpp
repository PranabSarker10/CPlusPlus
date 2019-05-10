///Starting
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[] = {2,4,1,6,7,5,3};

    for(int i=0; i<7; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;



    sort(arr,arr+7);///'sort' is used to sort all data.

    for(int i=0; i<7; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

/**
system to write:
sort(array,array+The element number of the array);
///Here the array is the array which I wanted to sort.
**/
    return 0;
}
