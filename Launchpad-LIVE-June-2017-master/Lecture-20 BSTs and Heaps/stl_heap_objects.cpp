#include<iostream>
#include<queue>
#include<functional>
#include<vector>
using namespace std;

///Priority queue
/// empty(), push(), pop(), top() [ basically gives the root node data ]
/// Inbuilt -Comparators to reverse the comparison
/// One such compartor is greater<int> present in 'functional' header file

///custom class with () as overloaded operator
class myCompare{

public:
    bool operator()(int a,int b){
       // cout<<"In my Compare";
       // cout<<"The number is "<<a<<" "<<endl;
        return a>b;
    }

};

int main(){

    int a[] = {1,4,3,2,6,0,10,12};
    int n = sizeof(a)/sizeof(int);


    priority_queue<int> pmax; ///Max Heap

    priority_queue<int,vector<int>, myCompare> pq;

    for(int i=0;i<n;i++){
        pq.push(a[i]);
    }

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

   // myCompare cmp;
    //int b = 10;
    //cmp(b,20); ///This line will call the () operator





}
