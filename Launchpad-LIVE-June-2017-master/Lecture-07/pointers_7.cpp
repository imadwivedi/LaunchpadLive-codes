#include<iostream>
using namespace std;

/// int sum( int a[])  or you can use int sum(int *a) -> a is pointer variable storing the adrss of actual
int sum(int *b,int n){
    int s = 0;

    for(int i=0;i<n;i++){
        s = s + b[i];
    }
    return s;
}

int main(){
    int a[10] = {1,2,3,4,5};

    cout<<sum(a,5)<<endl;
    cout<<sum(a+3,5)<<endl;



return 0;
}

