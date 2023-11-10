//                     10. Dynamic memory allocation of 2D array
#include <iostream>
using namespace std;

int main()
{
    int n; // for row wise
    cin >> n;

    int m; // for coloumn wise
    cin >> m;

    int **arr = new int *[n]; // dynamic allocation for 2D arry
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }

    for (int i = 0; i < n; i++) // taking input from user
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) // for output
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) // for releasing memory
    {
        delete[] arr[i]; // for colomn wise
    }

    delete[] arr; // for row wise

    return 0;
}
