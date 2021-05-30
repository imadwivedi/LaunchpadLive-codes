#include<iostream>
#define PI 3.14
#define print cout<<
using namespace std;

int main(){

    cout<<2*PI <<endl;
    print "Hello World!";

    ///Const variable
    const float x = 1.1; ///Created in ROM - Read Only
    /// x++; You cant update const variables
    cout<< x <<endl;


    return 0;
}
