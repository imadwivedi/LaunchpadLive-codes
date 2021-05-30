#include<iostream>
#include<cstring>
using namespace std;


int main(){
    int x;

    string s;

    //cin>>s;
    getline(cin,s); /// Input a sentence
    cout<<s<<endl;


    ///Suppose I want to create a array of strings
    string s1[10] = {"Apple","Apple Shake","Mango","Mango Shakke"};

    for(int i=0;i<4;i++){
        //cout<<s1[i] <<endl;

        for( int j=0; j<s1[i].length();j++){
            cout<<s1[i][j] <<" "; ///jth character of ith string

        }
    }


    return 0;
}
