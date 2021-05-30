#include<iostream>
using namespace std;


int main(){

    ///Create an array and initialise
    int a[10];

    int n;
    cin>>n;

    ///Input the elements of array
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ///Input the key
    int key;
    cin>>key;

    ///Linear Search - Search through entire array
    int i;
    for(i=0;i<n;i++){
            ///Try to match key with every element
            if(key==a[i]){
                cout<<"Found at index "<<i<<endl;
                break;
            }

    }
    ///Two Ways - Either Loop Completes or We have hit the break statement
    if(i==n){
        cout<<"The "<<key<<" is not present";
    }

return 0;
}

