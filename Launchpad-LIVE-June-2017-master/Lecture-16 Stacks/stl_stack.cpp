#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}

int main(){
    ///Push Pop and Top

    stack<int> s;

    for(int i=1;i<=5;i++){
        s.push(i);
    }
    print(s);

return 0;
}
