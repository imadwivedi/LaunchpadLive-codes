#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int *y = &x;

    cout<< x <<endl;
    cout<< &x <<endl;
    cout<< y <<endl;
    cout<< &y<<endl;

    char a ='A';

    cout<<a <<endl;
    char *b = &a;

    cout<< b <<endl;
    cout<< sizeof(b)<<endl;
    cout<< sizeof(y) <<endl;







return 0;
}
