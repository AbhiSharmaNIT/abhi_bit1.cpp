//                             1. basic of pointer

#include <iostream>
using namespace std;

int main()
{
    int n = 5;         // take a value
    cout << n << endl; // print the value

    cout << "Address of n : " << &n << endl; // print the location of memory block as address
    cout << "Size of n : " << sizeof(n) << endl
         << endl; // size of integer type

    int *ptr = &n; // make pointer which is store the values of address

    cout << "Now Address is : " << ptr << endl; // printing address location
    cout << "Value is : " << *ptr << endl;      // printing value through pointer
    cout << "Size of pointer is : " << sizeof(ptr) << endl
         << endl; // printing size of pointer

    double d = 4.3; // taking another type of datatype
    double *p = &d;

    cout << "Now Adress is : " << p << endl;
    cout << "Value is : " << *p << endl;
    cout << "Size of pointer is : " << sizeof(p);

    return 0;
}
