#include<iostream>
#include<stack>
using namespace std;

bool isReduntant(char exp[]){
    stack<char> s;

    for(int i=0;exp[i]!='\0';i++){
        char ch = exp[i];
        switch(ch){
            case '(': s.push(ch);
                      break;

            case ')': if(s.top()=='('){
                            return false;
                       }
                    else{
                            while(s.top()!='('){
                                    s.pop();
                            }
                            s.pop();
                            break;

                    }
            default : s.push(ch);
        }
    }
    return true;


}

int main(){

    char exp[] = "(((a+b)) + (c-d))";

    if(isReduntant(exp)){
        cout<<"yes "<<endl;
    }
    else{
        cout<<"No "<<endl;
    }


}
