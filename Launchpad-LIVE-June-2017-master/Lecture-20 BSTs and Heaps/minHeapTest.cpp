#include<iostream>
#include "minheap.h"
using namespace std;


int main(){

    int a[] = {1,4,3,2,6,0,10,12};
    int n = sizeof(a)/sizeof(int);

    minHeap h;
    for(int i=0;i<n;i++){
        h.push(a[i]);
    }
    ///Pop the elements
    while(!h.isEmpty()){
        cout<< h.getMin()<<" ";
        h.pop();
    }

return 0;
}
