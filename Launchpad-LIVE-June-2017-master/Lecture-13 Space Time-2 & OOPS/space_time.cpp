#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int *a = new int[i];
        cout<<a <<endl;
        //delete [] a;
    }

    for(int j=1;j<=n;j++){
        int b[10]; ///This is because static array is allocated once before the execution of program,
        ///This is created only once before execution...
        ///Compile time pe allocate ho gya hai
        /// run time pe dubara nahin banega

    }

return 0;
}
