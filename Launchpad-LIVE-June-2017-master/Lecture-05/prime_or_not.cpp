#include<iostream>
using namespace std;

bool isPrime(int n){

    for(int i=2; i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void printPrime(int range){
    ///Prints all primes from 2 to Range
    ///Complete this.
    for(int i=2;i<=range;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}

int fact(int n){
    ///Return the factorial of n
}


int main(){

    int n;
    cin>>n;

    printPrime(n);


}
