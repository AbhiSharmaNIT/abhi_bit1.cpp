//                     7. Call by reference
#include <iostream>
using namespace std;

void update(int &n) // function as reference argument
{
    n++;
}

int main()
{
    int n = 5;

    cout << "Before : " << n << endl;
    update(n); // function calling
    cout << "After : " << n << endl;
}

//                     8. For size of dynamic memory
#include <iostream>
using namespace std;

int main()
{
    char ch = 'q';

    cout << sizeof(ch) << endl;

    char *c = &ch;
    cout << sizeof(c);

    return 0;
}
