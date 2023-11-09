//                         5. Reference variable
#include <iostream>
using namespace std;

int main()
{
    int i = 10;

    int &j = i; // create a reference variable
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j;

    return 0;
}

//                   6. Call by value
#include <iostream>
using namespace std;

void update(int n)
{
    n++;
    cout << n << endl;
}
int main()
{
    int n = 5;

    cout << "Before : " << n << endl;
    update(n);
    cout << "After : " << n << endl;
}