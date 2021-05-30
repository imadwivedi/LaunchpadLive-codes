#include<iostream>
using namespace std;

int main(){
    char a[] = {'a','b','c','\0'};
    cout<<a <<endl;
    cout<<sizeof(a)<<endl;

    char b[] = "abc";
    cout<<b<<endl;
    cout<< &b <<endl;
    cout<<sizeof(b)<<endl;
}
