#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

}
void insertAtBottom(stack<int>&s,int topElement){

    stack<int> temp;

    while(!s.empty()){
        temp.push(s.top());
        s.pop();
    }
    s.push(topElement);

    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
}

void insertAtBottomRec(stack<int> &s,int topElement){
    if(s.empty()){
        s.push(topElement);
        return;
    }
    ///Rec Case
    int temp = s.top();
    s.pop();
    insertAtBottomRec(s,topElement);
    s.push(temp);
}



void reverseStack(stack<int> &s){
    ///Base Case
    if(s.empty()){
        return;
    }

    ///Rec Case
    int topElement = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottomRec(s,topElement);
}

int main(){
    stack<int> s;

    for(int i=0;i<=5;i++){
        s.push(i);
    }
    reverseStack(s);

    print(s);



}
