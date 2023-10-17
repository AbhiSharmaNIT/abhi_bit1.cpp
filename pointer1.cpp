//Ques.- How to print value of pointer and how to update this value in the program?
#include<iostream>
using namespace std;

int main(){

    int a=18;
    int *aptr = &a;    //we store the value by adress   
    //                  position of * is anywhere but only in backward direction 

    cout<<"Value of a is : "<<*aptr<<endl;  //output : 15
    a = 20;

    cout<<"New value of a is : "<<a<<endl;   //output : 20
    cout<<*aptr<<endl;   //output : 20        // Or we can use  :   cout<<*aptr; and we are // getting same value,

    cout<<"Garbez value is : "<<&a;   //that means to get random value which is stored in memory                                                                   
    return 0;

}


