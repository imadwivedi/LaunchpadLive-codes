#include<iostream>
using namespace std;

///Passing a 2d array to function
void deleteArray(int **a,int n){

    ///First i need to delete the rows
    for(int i=0;i<n;i++){
        delete [] a[i];
    }

    ///Delete Addresses array delete kia
    delete [] a;
    a = 0;
}


int main(){

    ///Pointer to pointer
    int **a; ///Local variable

    int rows,cols;
    cin>>rows>>cols;

    a = new int*[rows];

    cout<< a <<endl; ///Address of first box of
    cout<< &a <<endl; ///Address of a

    ///For every box in the array, you can create a row
    for(int i=0;i<rows;i++){
        a[i] = new int[cols];
        cout<<a[i]<<endl;
    }

    ///Now to print it
    int no = 1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            a[i][j] = no;
            no++;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    ///a is being passed by value, any change a will not reflect in a but array will get deleted
    deleteArray(a,rows);
    a = 0;

    cout<<endl;
    cout<< a <<endl;




return 0;
}
