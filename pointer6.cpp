//                 2. play with pointers

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a value : " << endl;
    cin >> n;

    int *ptr = 0; // initialise the pointer
    ptr = &n;     // insert the address of number into pointer

    cout << "Address of n is : " << ptr << endl;
    cout << "Value of n is : " << *ptr << endl;

    (*ptr)++; // update the pointer with (), () is necessary
    cout << "After update the value is : " << n << endl;
    // cout<<"After update the value is : "<<*ptr<<endl;         //same as upper case
}