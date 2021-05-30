#include<iostream>
using namespace std;


int main(){

    int x = 10;

    ///Create a pointer Variable ( * is part of syntx)
    int *y ;

    /// y contains address, *y will the give the value
    y=  &x ;


    cout<< &x <<endl;
    cout<< y <<endl;
    cout<< &y <<endl;
    cout<< *y <<endl;

    cout<< &(*y) <<endl;
    cout<< *(&y) <<endl;
   /// cout<< &(*x) <<endl; - CE
    cout<< *(&x) <<endl;


    cout<< x + 1 <<endl;
    cout<< &x <<endl;
    cout<< y <<endl;
    cout<< &x + 1 <<endl;
    cout<< y + 1 <<endl;
    cout<< &y + 1 <<endl;


    int * z ;
    z = 0;


    cout << *z <<endl; ///Two things can happen
    /// Garbage value or you will segmentation fault.







return 0;
}
