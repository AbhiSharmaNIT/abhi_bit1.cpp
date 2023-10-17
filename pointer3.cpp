//Ques.- How to print all elements of array to the help of pointer?
// Case 1.
#include<iostream>
using namespace std;

int main()
{

    int arr[] = {11,12,13,14};
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;

    int *patr = arr;  
    cout<<"Values are : \n";  // In this term we convert array into the pointer then print value.
    for(int i=0; i<4; i++)
    {
        cout<<*patr<<endl;
        patr++;
    }
    
    return 0;
}
// Case 2.
// We print same elements of an array without converting array into the pointer.
/* We use this type of algorithm and then proceed */
#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};
    cout<<*arr<<endl;

    for (int i = 0; i<5; i++)
    {
        cout<<*(arr + i)<<endl;   // In this code we didn't use the pointer.
    }
    return 0;
}


