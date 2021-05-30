#include<iostream>
using namespace std;

/// Check a no is prime or not
int main(){

    int no;
    cin>>no;

    int i=2;
    while(i<=no-1){
        if(no%i==0){
            cout<<"Not Prime";
            return 0;
        }
        ///go to the next no
        i = i + 1;
    }
    ///It means no is not divisible by any no btw 2 and n-1
    cout<<no<<" is prime";


return 0;
}
