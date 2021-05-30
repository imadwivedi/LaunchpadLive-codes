#include<iostream>
using namespace std;



int main(){
    int x = 10;
    ///* is part of syntax to create a pointer
    int *y;

    /// Y will store the address of x
    y = &x;

    ///*y means the value at x
    cout<< *y <<endl;

    *y = *y + 1;

    cout<< y <<endl;
    cout<< x <<endl;



}
