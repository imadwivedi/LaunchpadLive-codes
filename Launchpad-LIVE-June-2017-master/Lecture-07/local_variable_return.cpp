#include<iostream>
using namespace std;

///Returns an address of a local variable(array)
int* createArr(){
    int a[] = {1,2,3};
    cout<<a <<endl;
    ///Print the array
    for(int i=0;i<3;i++){
        cout<<a[i]<<" ";
    }
    return a;
}

int main(){
    int* b = createArr();
    cout<< b <<endl;

    for(int i=0;i<3;i++){
        cout<<b[i]<<" ";
    }

    return 0;
}
