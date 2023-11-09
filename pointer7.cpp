//                 3. Null pointer
#include <iostream>
using namespace std;
int main()
{
    int *ptr;                                 // declaration pointer variable
    ptr = NULL;                               // assigning NULL Address to the pointer
    cout << "Address in ptr=" << ptr << endl; // gives the address that stored in pointer
    return 0;
}

//             4. Access the memory block
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {32, 43, 54, 65};

    cout << "Address of 1st memory block : " << arr << endl;
    cout << "Address of 1st memory block : " << &arr[0] << endl;

    cout << "value of element : " << *arr << endl;
    cout << "after increasing value of element : " << *arr + 2 << endl;
    cout << "value of 3rd element : " << *(arr + 2) << endl;

    int i = 3;
    cout << "4th element is : " << i[arr] << endl;
}