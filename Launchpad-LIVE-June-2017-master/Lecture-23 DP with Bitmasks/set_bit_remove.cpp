#include<iostream>
using namespace std;


int countBits(int n){

    int count = 0;
    while(n>0){
        int p = n&(-n);
        n -= p;
        count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<countBits(n)<<endl;

}
