#include<iostream>
using namespace std;

///n=5 => 1 2 3 4 5
void printInc(int n){
     if(n==0){
        return;
    }
    printInc(n-1);
    cout<<n<<" ";
    return;

}
///n=5 => 5 4  3 2 1
void printDec(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printDec(n-1);
    return;
}

int main(){
    printInc(5);

return 0;
}
