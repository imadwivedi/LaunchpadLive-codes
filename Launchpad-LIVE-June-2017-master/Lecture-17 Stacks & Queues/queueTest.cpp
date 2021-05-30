#include<iostream>
#include "queue.h"
using namespace std;


int main(){

    Queue q(100);

    for(int i=1;i<=8;i++){
        q.push(i);
    }
    q.pop();
    q.push(9);
    q.push(10);

    while(!q.isEmpty()){
        cout<< q.front()<<" ";
        q.pop();
    }


return 0;
}
