#include<iostream>
using namespace std;

void bubbleSort(int *a,int n){
    ///Base Case - Smallest array 1 element
    if(n==1){
        return;
    }
    ///Rec Case
    for(int j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
    ///Last element is sorted
    bubbleSort(a,n-1);
}

void bubbleSort2(int *a,int j,int n){
        if(n==1){
            return;
        }
        if(j==n-1){
            return bubbleSort2(a,0,n-1);
        }

        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
        return bubbleSort2(a,j+1,n);
}


int main(){
    int a[] = { 5,4,1,3,2};
    int n = 5;

    bubbleSort2(a,0,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }



return 0;
}
