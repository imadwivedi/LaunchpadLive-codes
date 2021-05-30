#include<iostream>
using namespace std;


int main(){
    int a[] = {1,2,3,4,5};

    int b = 10;

    int *ptr = &b;

    cout<< ptr <<endl;

    cout<< a <<endl;

    ptr = a ;
    cout<< ptr <<endl;

    ptr++;
    cout<<ptr <<endl;

    ///Pointers can re-assigned to some new value
    /// But array names can't ( read only )

    int *ptr2 = a;
    int *ptr3 = a + 5;

    cout<< ptr3 <<endl;
    cout<< ptr2 <<endl;
    cout<< ptr3 - ptr2 <<endl;



}
