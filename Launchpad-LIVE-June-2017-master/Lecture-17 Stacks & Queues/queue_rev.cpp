#include<iostream>
#include<stack>
#include<queue>
using namespace std;




int main(){

    queue<int> q;
    stack<int> s;

    ///Lets build the queue
    for(int i=1;i<=5;i++){
        q.push(i);
    }
    ///Lets empty the queue
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    ///Lets empty the stack
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

    ///Print the queue
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }




return 0;
}
