#include<iostream>
using namespace std;
///passing fun(int b[]) is same as fun(int *b)
void fun(int b[]){
    cout<<b <<endl;
    cout<<sizeof(b)<<endl;

}

int main(){
        int a[100];
        cout<<a <<endl; /// Same as address of array
        cout<<&a <<endl; /// Same
        cout<< &a[0] <<endl; ///Same

        cout<<sizeof(a)<<endl;


        fun(a); ///Same


        ///Record a separate tutorial - try this at home!

}
