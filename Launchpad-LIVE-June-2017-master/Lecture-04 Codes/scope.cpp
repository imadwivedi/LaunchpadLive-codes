#include<iostream>
using namespace std;

int x=100; ///Global Scope - Visible outside main

int main(){

    cout<<x<<endl; /// 100 output

    int x = 10; /// Local Scope - Exists in only in Main block
    cout<<x<<endl;///Try to search for innermost scope

    int x;
    for( x=1;x<=5;x++){
        cout<<x<<" ";
        cout<<::x<<endl; /// Global!
    }

    cout<<x<<endl; /// Out is 6
    ///Suppose I want to print Global X.
    ///Scope Resolution Operator
    cout<< :: x <<endl ; /// Global X

    ::x += 2; ///Update the Global x

    cout<< ::x <<endl;


    //cout<<i<<endl;


return 0;
}
