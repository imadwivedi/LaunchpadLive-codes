#include<iostream>
using namespace std;

int len(char *a){
    int i=0;
    while(a[i]!='\0'){
        i++;
    }
    return i;
}

bool isPalindrome(char *a){
    int i = 0;
    int j = len(a) -1;

    while(i<j){
        if(a[i]!=a[j]){
            return false;
        }
        i++;
        j--;

    }
    return true;
}

void append(char *a,char *b){

    int i = len(a);
    int j = 0;

    while(b[j]!='\0'){
        a[i] = b[j];
        i++; j++;
    }
    a[i] = '\0';

}

int main(){
    char a[100],b[100];
    cin.getline(a,100);
    cin.getline(b,100);

    append(a,b);
    cout<<a <<endl;

    /*
    cout<<len(a) <<endl;

    if(isPalindrome(a)){
        cout<<"Yes ";
    }
    else{
        cout<<"NO";
    }
    */



return 0;
}
