#include<iostream>
using namespace std;

/// Rule of C++ int main
int main() {

    //output
    cout<<"Hello World!";

    //take input 2 numbers and add them
    cout<<'\n';
    cout<<'\n';

    /// INTEGER VARIABLES
    int a=10; /// Declaration + Initialisation
    int b=20;
    int c; /// Declaration

    /// CIN FOR INPUT
    cin>>c;

    /// COUT FOR OUTPUT
    cout<< a + b + c;

    /// Code for other  types of statements.

    ///Conditional Statement
    cout<<endl;


    if(c%2==0){
            cout<<c<<" is even! ";
    }
    else{
            cout<<c<<" is odd ";
    }

    float number;
    number = 3; /// Assignment

    if(number==3){
        cout<<number<<" is equal to 3"<<endl;
    }

    /// Repeat
    /// Print all numbers from 1 to 10
    int i = 1;
    while(i<=10){
        cout<<i <<" ";
        i = i + 1;
    }

    return 0;
}
