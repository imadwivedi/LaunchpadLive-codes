#include<iostream>
using namespace std;

int *createArr(int n){

    int *a = new int[n]; ///Dynamic Array isnt destroyed automaticall
    for(int i=0;i<n;i++){
        a[i] = i*i;
        cout<<a[i]<<" ";
    }
    ///Destroy the dynamic array
   // delete [] a;
    cout<<endl;
    return a;
}

int main(){

    int n;
    cin>>n;
    int *a = createArr(n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    delete [] a;

return 0;
}
