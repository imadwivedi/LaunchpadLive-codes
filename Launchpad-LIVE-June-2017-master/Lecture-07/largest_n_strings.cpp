#include<iostream>
#include<cstring>
using namespace std;



int main(){

    int n;
    cin>>n;

    char currentString[1000];
    char largestString[1000];
    int len =0, largestLen=0;
    cin.get(); ///consumes the extra '\n' from the input buffer

    ///Read the N Strings, Save one a time.
    for(int i=1;i<=n;i++){
        cin.getline(currentString,1000);
        len = strlen(currentString); ///Strlen is inbuild fn that computes length of a string
        if(len>largestLen){
            largestLen = len;
            ///Strcpy fn which copies one string to another
            strcpy(largestString,currentString);
        }
    }
    ///Loop end - Largest String
    cout<<"Largest string is "<<largestString<<endl;
    cout<<"Len is "<< largestLen<<endl;

    return 0;
}
