#include<iostream>
using namespace std;


int main(){

    ///Create an array and initialise
    int a[10] = {1};

    int n;
    cin>>n;

    ///Input the elements of array
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    ///Print the elements of array in reverse order
    for(int i=0;i<n;i++){
        cout<<a[n-1-i]<<" ";
    }



return 0;
}
