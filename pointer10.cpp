//                         9. Declearation of array in dynamic form
#include <iostream>
using namespace std;

int getsum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;

    int *arr = new int[n]; // declearation of an array in heap memory

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = getsum(arr, n);

    cout << endl
         << "Answer is : " << ans;
    return 0;
}