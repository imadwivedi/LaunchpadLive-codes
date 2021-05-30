#include<iostream>
using namespace std;

bool isSorted(int *a,int n){
    ///Base Case
    if(n==1){
        return true;
    }
    ///Rec Case
    if(a[0]<=a[1] && isSorted(a+1,n-1)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int a[] = {1,3,5,6,7};
    int n=5;

    if(isSorted(a,n)){
        cout<<"Ekdum mast sorted hai !"<<endl;
    }
    else{
        cout<<"Sorting bigaad gyi hai "<<endl;
    }


return 0;
}
