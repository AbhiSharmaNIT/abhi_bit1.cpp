//Quess.- How to swap the values with the help of pointer?
#include<iostream>
using namespace std;

void swap( int &num1,int &num2)
{

    int temp;
    temp = num1;           // This part is not necessary!
    num1 = num2;
    num2 = temp;
    
}

int main(){

    int a =10, b =20;

    cout<<"Before swaping "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    swap(a,b);

    cout<<"After swaping "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    return 0;
}