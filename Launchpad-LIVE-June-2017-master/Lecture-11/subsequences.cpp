#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

vector<string> s;

bool myCompare(string s1,string s2){
    return s1<s2;
}

void findSubsequnces(char *input,char *output,int i,int j){
    ///Base Case
    if(input[i]=='\0'){
        output[j]='\0';
        ///Create a string temp from output array and push it into set

        string temp = output;
        s.push_back(temp);
        return;
    }
    ///Include ith char
    output[j] = input[i];
    findSubsequnces(input,output,i+1,j+1);
    ///Exclude ith char
    findSubsequnces(input,output,i+1,j);
}

int main(){
    char input[100] ="aBcD",output[100];


    findSubsequnces(input,output,0,0);

    sort(s.begin(),s.end(),myCompare);
    for(auto i:s){
        cout<<i<<" ";
    }
return 0;
}
