#include<iostream>
using namespace std;


int main(){

    int a = 10;
    a = a + 1;
    a++;

    ///Post inc - First Print then increment
    cout<<a++<<endl;
    ///Pre inc - First increment then print
    cout<<++a<<endl;


return 0;
}
