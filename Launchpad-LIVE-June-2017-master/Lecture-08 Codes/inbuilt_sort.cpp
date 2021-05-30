#include<iostream>
#include<algorithm>
using namespace std;


bool myCompare(int a,int b){
    return a>b;
}

int main(){

    int a[] = {5,4,3,1,2,7};
    ///Sort the integers
    int n = sizeof(a)/sizeof(int);

    sort(a,a+n,myCompare); ///Randomized QuickSort - NLogN

    for(int i=0;i<n;i++){
        cout<< a[i] <<" ";
    }
    ///Comparators are functions that help to define my Logic For Sorting.




}
