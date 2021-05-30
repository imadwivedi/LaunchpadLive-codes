#include<iostream>
using namespace std;


int main(){
    int a=100;
    cout<< a <<endl;
    cout<< &a <<endl; ///Gives me the address of a.

    ///In case of arrays
    int b[100];

    ///ALll of these are same - address of b.
   /*
    cout<< b <<endl;
    cout<< &b <<endl;
    cout<< &b[0] <<endl;
    */

    ///Store the adress of some variable
    int * ptr; ///Create a pointer variable

    ptr = &a;

    cout<< ptr <<endl; ///Ptr is storing &a
    cout<< &a <<endl;




}
