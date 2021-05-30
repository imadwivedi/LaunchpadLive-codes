#include<iostream>
using namespace std;

void fun(int *y){

    y = y + 1;
    *y = *y + 1;
    //cout<<y <<endl;

}

int main(){
    int x = 10;

    cout<<&x<<endl;
    fun(&x);
    cout<<&x <<endl;
    cout<< x <<endl; /// Output ?



return 0;
}
