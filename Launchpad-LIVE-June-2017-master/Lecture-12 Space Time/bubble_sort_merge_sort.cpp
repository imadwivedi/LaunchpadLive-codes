#include<iostream>
#include<ctime>
#include<algorithm>
using namespace std;

void bubbleSort(int *a,int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<=n-i-2;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

void createRevArray(int *a,int n){

    for(int i=0;i<n;i++){
        a[i] = n - i;
    }
}

int a[1000000];

int main(){

    int t;
    cin>>t;

    while(t--){
    int n;
    cin>>n;

    createRevArray(a,n);

    ///Note the execution time of Bubble Sort but not of the whole program
    clock_t   s = clock();  ///Clock() function that returns the current time of the system in ms
    bubbleSort(a,n);
    clock_t e = clock(); ///clock_t is the datatype for time
    cout<<"Bubble Sort took "<<e - s<<endl;


    ///For Merge Sort
     createRevArray(a,n);

    ///Note the execution time of Merge Sort but not of the whole program
    s = clock();  ///Clock() function that returns the current time of the system in ms
    sort(a,a+n);
    e = clock(); ///clock_t is the datatype for time
    cout<<"Merge Sort took "<<e - s<<endl;
    }


return 0;
}
