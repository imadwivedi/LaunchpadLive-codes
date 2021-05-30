#include<iostream>
using namespace std;

///First Occurence of Key
int searchElement(int *a,int n,int key){
    if(n==0){
        return -1;
    }

    ///Rec Case
    if(a[0]==key){
        return 0;
    }

    int choteMeinMila = searchElement(a+1,n-1,key);
    if(choteMeinMila==-1){
        return -1;
    }
    else{
        return 1 + choteMeinMila;
    }
}
///Last occurence of key /// Start i=0 ----Last Occ using Recursion

int lastIndex(int *a,int n,int key){
    if(n==0){
        return -1;
    }

    int aageMila = lastIndex(a+1,n-1,key);
    if(aageMila==-1){
        ///Check at the current position
        if(a[0]==key){
            return 0;
        }
        else{
            return -1;
        }

    }
    return aageMila + 1;
}




int main(){
    int a[ ] = {1,3,5,7,8,7,7,7,2};
    int n = sizeof(a)/sizeof(int);
    cout<<"First occ "<<searchElement(a,n,7)<<endl;
    cout<<"Last occ "<<lastIndex(a,n,7)<<endl;

return 0;
}
